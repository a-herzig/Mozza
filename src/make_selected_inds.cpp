//[[Rcpp::depends(gaston)]]
#include <Rcpp.h>
#include "mozza.h"
#include "gaston/matrix4.h"
#include "phenotyper.h"
using namespace Rcpp;

// VAST AMOUNT OF COPY PASTING FROM make_inds.cpp
// pour tester, 1ere implémentation : des scores > 1

// cette fonction fait des individus indépendants
// avec des haplos mosaiques avec tuiles de longueurs 
// length_tiles parmi n_haps haplotypes
// Ils sont pushed back dans un vecteur de mozza::zygote
// ZYG : vector in which to push pack the zygote
// n : number of inds to generate
// n_haps : tiles will be numbered from 0 to n_haps-1
// length_tiles : in cM

void makeSelectedInds(std::vector<mozza::zygote> & ZYG, int n, int n_haps, double length_tiles, 
                      mozza::phenotyper<IntegerVector, NumericVector> PT) {
  for(int i = 0; i < n; i++) {
    mozza::zygote z =  mozza::zygote(mozza::human_autosomes_b37, n_haps, length_tiles);
    if(PT.getZygoteScore(z) > 1)
      ZYG.push_back(z);
  }
}

// wraper pour renvoyer des vecteurs de mozza::zygote
std::vector<mozza::zygote> makeSelectedInds(int n, int n_haps, double length_tiles, 
                                            mozza::phenotyper<IntegerVector, NumericVector> PT) {
  std::vector<mozza::zygote> ZYG;
  makeSelectedInds(ZYG, n, n_haps, length_tiles, PT);
  return ZYG;
}


// Habillages avec un drop_to_bed_matrix pour finir
//[[Rcpp::export]]
List makeSelectedInds(int n, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, 
               IntegerVector submap, NumericVector beta, bool kinship = false, bool fraternity = false) {
  int n_haps = Haplos->ncol; // chaque haplotype = un "individu"
  mozza::mappedBed<IntegerVector, NumericVector> MB(Haplos, chr, dist);
  mozza::phenotyper<IntegerVector, NumericVector> PT(MB, submap, beta);

  std::vector<mozza::zygote> ZYG { makeSelectedInds(n, n_haps, length_tiles, PT) }; 
  
  List L;

  L["bed"] = drop_to_bed_matrix(ZYG, MB);
  if(kinship) 
    L["kinship"] = kinship_matrix(ZYG);
  if(fraternity) 
    L["fraternity"] = fraternity_matrix(ZYG);
  return L;
}

/* test viteuf
x <- makeSelectedInds(100, 20, H@bed, H@snps$chr, H@snps$dist, 1:10, rep(.5, 10), TRUE, TRUE)
*/

/*
// idem avec l'autre constructeur de mosaiques
// qui prend un vecteur de proba des haplotypes de base
// ZYG : vector in which to push pack the zygote
// n : number of inds to generate
// proba_tiles : vector of probabilities (its length n_hap give the bound of the tile numbers)
// length_tiles : in cM
void make_inds(std::vector<mozza::zygote> & ZYG, int n, const std::vector<double> & proba_tiles, double length_tiles = 20.) {
  for(int i = 0; i < n; i++) {
    ZYG.push_back( mozza::zygote(mozza::human_autosomes_b37, proba_tiles, length_tiles) );
  }
}
*/

/*
// wraper pour renvoyer des vecteurs de mozza::zygote
std::vector<mozza::zygote> make_inds(int n, const std::vector<double> & proba_tiles, double length_tiles = 20.) {
  std::vector<mozza::zygote> ZYG;
  make_inds(ZYG, n, proba_tiles, length_tiles);
  return ZYG;
}*/


/*
// proba_haplos est une matrice, chaque colonnes donne un jeu de proba sur les haplotypes
// le vecteur d'effectif N contient les effectifs à générer pour chacune des colonnees
// Cela permet de générer plus facilement des données avec des sous-populations ayant des 
// proportions différentes.
//[[Rcpp::export]]
List make_inds_probs(IntegerVector N, NumericMatrix proba_haplos, double length_tiles, 
                     XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, 
                     bool kinship = false, bool fraternity = false) {

  int n_haps = Haplos->ncol; // chaque haplotype = un "individu"
  if(n_haps != proba_haplos.nrow() || N.size() != proba_haplos.ncol()) {
    Rcerr << "nb haplotypes = " << n_haps << "\n";
    Rcerr << "probability matrix has " << proba_haplos.nrow() << " rows\n";
    Rcerr << "probability matrix has " << proba_haplos.ncol() << " cols\n";
    Rcerr << "number of demes " << N.size() << "\n";
    stop("Dimensions mismatch");
  }
  std::vector<mozza::zygote> ZYG;
  
  std::vector<double> p( n_haps );
  for(int j = 0; j < proba_haplos.ncol(); j++) {
    for(int i = 0; i < n_haps; i++)
      p[i] = proba_haplos(i,j);
    make_inds(ZYG, N[j], p, length_tiles); 
  }

  List L;
  L["bed"] = drop_to_bed_matrix(ZYG, Haplos, chr, dist);
  if(kinship) 
    L["kinship"] = kinship_matrix(ZYG);
  if(fraternity) 
    L["fraternity"] = fraternity_matrix(ZYG);
  return L;
}*/

