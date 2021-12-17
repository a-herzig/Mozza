// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/Mozza.h"
#include <Rcpp.h>

using namespace Rcpp;

// GQ
IntegerVector GQ(NumericMatrix phtab);
RcppExport SEXP _Mozza_GQ(SEXP phtabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type phtab(phtabSEXP);
    rcpp_result_gen = Rcpp::wrap(GQ(phtab));
    return rcpp_result_gen;
END_RCPP
}
// GT
IntegerVector GT(NumericMatrix phtab);
RcppExport SEXP _Mozza_GT(SEXP phtabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type phtab(phtabSEXP);
    rcpp_result_gen = Rcpp::wrap(GT(phtab));
    return rcpp_result_gen;
END_RCPP
}
// cousins_1stdegree
List cousins_1stdegree(int n, double tile_length, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool kinship, bool fraternity);
RcppExport SEXP _Mozza_cousins_1stdegree(SEXP nSEXP, SEXP tile_lengthSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP kinshipSEXP, SEXP fraternitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type tile_length(tile_lengthSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type kinship(kinshipSEXP);
    Rcpp::traits::input_parameter< bool >::type fraternity(fraternitySEXP);
    rcpp_result_gen = Rcpp::wrap(cousins_1stdegree(n, tile_length, Haplos, chr, dist, kinship, fraternity));
    return rcpp_result_gen;
END_RCPP
}
// getGenoVector
IntegerVector getGenoVector(XPtr<matrix4> pA, int snpIndex, bool Rindex);
RcppExport SEXP _Mozza_getGenoVector(SEXP pASEXP, SEXP snpIndexSEXP, SEXP RindexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type pA(pASEXP);
    Rcpp::traits::input_parameter< int >::type snpIndex(snpIndexSEXP);
    Rcpp::traits::input_parameter< bool >::type Rindex(RindexSEXP);
    rcpp_result_gen = Rcpp::wrap(getGenoVector(pA, snpIndex, Rindex));
    return rcpp_result_gen;
END_RCPP
}
// make_haps
List make_haps(int n, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool ibd);
RcppExport SEXP _Mozza_make_haps(SEXP nSEXP, SEXP length_tilesSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP ibdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type ibd(ibdSEXP);
    rcpp_result_gen = Rcpp::wrap(make_haps(n, length_tiles, Haplos, chr, dist, ibd));
    return rcpp_result_gen;
END_RCPP
}
// make_haps_probs
List make_haps_probs(IntegerVector N, NumericMatrix proba_haplos, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool ibd);
RcppExport SEXP _Mozza_make_haps_probs(SEXP NSEXP, SEXP proba_haplosSEXP, SEXP length_tilesSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP ibdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type N(NSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type proba_haplos(proba_haplosSEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type ibd(ibdSEXP);
    rcpp_result_gen = Rcpp::wrap(make_haps_probs(N, proba_haplos, length_tiles, Haplos, chr, dist, ibd));
    return rcpp_result_gen;
END_RCPP
}
// make_inds
List make_inds(int n, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool kinship, bool fraternity);
RcppExport SEXP _Mozza_make_inds(SEXP nSEXP, SEXP length_tilesSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP kinshipSEXP, SEXP fraternitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type kinship(kinshipSEXP);
    Rcpp::traits::input_parameter< bool >::type fraternity(fraternitySEXP);
    rcpp_result_gen = Rcpp::wrap(make_inds(n, length_tiles, Haplos, chr, dist, kinship, fraternity));
    return rcpp_result_gen;
END_RCPP
}
// make_inds_probs
List make_inds_probs(IntegerVector N, NumericMatrix proba_haplos, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool kinship, bool fraternity);
RcppExport SEXP _Mozza_make_inds_probs(SEXP NSEXP, SEXP proba_haplosSEXP, SEXP length_tilesSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP kinshipSEXP, SEXP fraternitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type N(NSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type proba_haplos(proba_haplosSEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type kinship(kinshipSEXP);
    Rcpp::traits::input_parameter< bool >::type fraternity(fraternitySEXP);
    rcpp_result_gen = Rcpp::wrap(make_inds_probs(N, proba_haplos, length_tiles, Haplos, chr, dist, kinship, fraternity));
    return rcpp_result_gen;
END_RCPP
}
// make_pairs
List make_pairs(int N, double le1, double le2, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist);
RcppExport SEXP _Mozza_make_pairs(SEXP NSEXP, SEXP le1SEXP, SEXP le2SEXP, SEXP length_tilesSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type le1(le1SEXP);
    Rcpp::traits::input_parameter< double >::type le2(le2SEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(make_pairs(N, le1, le2, length_tiles, Haplos, chr, dist));
    return rcpp_result_gen;
END_RCPP
}
// makeSelectedInds
List makeSelectedInds(int n, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, IntegerVector submap, NumericVector beta, double h2, bool kinship, bool fraternity);
RcppExport SEXP _Mozza_makeSelectedInds(SEXP nSEXP, SEXP length_tilesSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP submapSEXP, SEXP betaSEXP, SEXP h2SEXP, SEXP kinshipSEXP, SEXP fraternitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type submap(submapSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type h2(h2SEXP);
    Rcpp::traits::input_parameter< bool >::type kinship(kinshipSEXP);
    Rcpp::traits::input_parameter< bool >::type fraternity(fraternitySEXP);
    rcpp_result_gen = Rcpp::wrap(makeSelectedInds(n, length_tiles, Haplos, chr, dist, submap, beta, h2, kinship, fraternity));
    return rcpp_result_gen;
END_RCPP
}
// nuclear_families
List nuclear_families(int nb_fams, int nb_offsprings, double tile_length, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool kinship, bool fraternity);
RcppExport SEXP _Mozza_nuclear_families(SEXP nb_famsSEXP, SEXP nb_offspringsSEXP, SEXP tile_lengthSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP kinshipSEXP, SEXP fraternitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nb_fams(nb_famsSEXP);
    Rcpp::traits::input_parameter< int >::type nb_offsprings(nb_offspringsSEXP);
    Rcpp::traits::input_parameter< double >::type tile_length(tile_lengthSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type kinship(kinshipSEXP);
    Rcpp::traits::input_parameter< bool >::type fraternity(fraternitySEXP);
    rcpp_result_gen = Rcpp::wrap(nuclear_families(nb_fams, nb_offsprings, tile_length, Haplos, chr, dist, kinship, fraternity));
    return rcpp_result_gen;
END_RCPP
}
// nuclear_families_probs
List nuclear_families_probs(IntegerVector Nfams, int nb_offsprings, NumericMatrix proba_haplos, double length_tiles, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool kinship, bool fraternity);
RcppExport SEXP _Mozza_nuclear_families_probs(SEXP NfamsSEXP, SEXP nb_offspringsSEXP, SEXP proba_haplosSEXP, SEXP length_tilesSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP kinshipSEXP, SEXP fraternitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type Nfams(NfamsSEXP);
    Rcpp::traits::input_parameter< int >::type nb_offsprings(nb_offspringsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type proba_haplos(proba_haplosSEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type kinship(kinshipSEXP);
    Rcpp::traits::input_parameter< bool >::type fraternity(fraternitySEXP);
    rcpp_result_gen = Rcpp::wrap(nuclear_families_probs(Nfams, nb_offsprings, proba_haplos, length_tiles, Haplos, chr, dist, kinship, fraternity));
    return rcpp_result_gen;
END_RCPP
}
// pasteVcfElts
std::string pasteVcfElts(CharacterVector genoN, IntegerVector rd, IntegerVector rd2, IntegerVector rd3, IntegerVector GQ, NumericMatrix phtab);
RcppExport SEXP _Mozza_pasteVcfElts(SEXP genoNSEXP, SEXP rdSEXP, SEXP rd2SEXP, SEXP rd3SEXP, SEXP GQSEXP, SEXP phtabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type genoN(genoNSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rd(rdSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rd2(rd2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rd3(rd3SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type GQ(GQSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type phtab(phtabSEXP);
    rcpp_result_gen = Rcpp::wrap(pasteVcfElts(genoN, rd, rd2, rd3, GQ, phtab));
    return rcpp_result_gen;
END_RCPP
}
// population
List population(int n0, int nGen, int keep, double lambda, double tile_length, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist, bool kinship, bool fraternity);
RcppExport SEXP _Mozza_population(SEXP n0SEXP, SEXP nGenSEXP, SEXP keepSEXP, SEXP lambdaSEXP, SEXP tile_lengthSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP, SEXP kinshipSEXP, SEXP fraternitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n0(n0SEXP);
    Rcpp::traits::input_parameter< int >::type nGen(nGenSEXP);
    Rcpp::traits::input_parameter< int >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type tile_length(tile_lengthSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type kinship(kinshipSEXP);
    Rcpp::traits::input_parameter< bool >::type fraternity(fraternitySEXP);
    rcpp_result_gen = Rcpp::wrap(population(n0, nGen, keep, lambda, tile_length, Haplos, chr, dist, kinship, fraternity));
    return rcpp_result_gen;
END_RCPP
}
// essai
void essai();
RcppExport SEXP _Mozza_essai() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    essai();
    return R_NilValue;
END_RCPP
}
// test_cursor
void test_cursor();
RcppExport SEXP _Mozza_test_cursor() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    test_cursor();
    return R_NilValue;
END_RCPP
}
// essai2
void essai2();
RcppExport SEXP _Mozza_essai2() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    essai2();
    return R_NilValue;
END_RCPP
}
// essai3
void essai3();
RcppExport SEXP _Mozza_essai3() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    essai3();
    return R_NilValue;
END_RCPP
}
// essai3bis
void essai3bis();
RcppExport SEXP _Mozza_essai3bis() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    essai3bis();
    return R_NilValue;
END_RCPP
}
// test_sharing
List test_sharing(int n, double le1, double le2);
RcppExport SEXP _Mozza_test_sharing(SEXP nSEXP, SEXP le1SEXP, SEXP le2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type le1(le1SEXP);
    Rcpp::traits::input_parameter< double >::type le2(le2SEXP);
    rcpp_result_gen = Rcpp::wrap(test_sharing(n, le1, le2));
    return rcpp_result_gen;
END_RCPP
}
// test_IBD_sibs
List test_IBD_sibs(int n, int n_haps, double length_tiles);
RcppExport SEXP _Mozza_test_IBD_sibs(SEXP nSEXP, SEXP n_hapsSEXP, SEXP length_tilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n_haps(n_hapsSEXP);
    Rcpp::traits::input_parameter< double >::type length_tiles(length_tilesSEXP);
    rcpp_result_gen = Rcpp::wrap(test_IBD_sibs(n, n_haps, length_tiles));
    return rcpp_result_gen;
END_RCPP
}
// test_push_genos
std::vector<int> test_push_genos(IntegerVector H);
RcppExport SEXP _Mozza_test_push_genos(SEXP HSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type H(HSEXP);
    rcpp_result_gen = Rcpp::wrap(test_push_genos(H));
    return rcpp_result_gen;
END_RCPP
}
// test_xptr
XPtr<matrix4> test_xptr(XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist);
RcppExport SEXP _Mozza_test_xptr(SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(test_xptr(Haplos, chr, dist));
    return rcpp_result_gen;
END_RCPP
}
// families_of_4_v0
XPtr<matrix4> families_of_4_v0(int N, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist);
RcppExport SEXP _Mozza_families_of_4_v0(SEXP NSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(families_of_4_v0(N, Haplos, chr, dist));
    return rcpp_result_gen;
END_RCPP
}
// families_of_4
XPtr<matrix4> families_of_4(int N, XPtr<matrix4> Haplos, IntegerVector chr, NumericVector dist);
RcppExport SEXP _Mozza_families_of_4(SEXP NSEXP, SEXP HaplosSEXP, SEXP chrSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type Haplos(HaplosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chr(chrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(families_of_4(N, Haplos, chr, dist));
    return rcpp_result_gen;
END_RCPP
}
// write_hap_file
void write_hap_file(XPtr<matrix4> p_A, std::string filename);
RcppExport SEXP _Mozza_write_hap_file(SEXP p_ASEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    write_hap_file(p_A, filename);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Mozza_GQ", (DL_FUNC) &_Mozza_GQ, 1},
    {"_Mozza_GT", (DL_FUNC) &_Mozza_GT, 1},
    {"_Mozza_cousins_1stdegree", (DL_FUNC) &_Mozza_cousins_1stdegree, 7},
    {"_Mozza_getGenoVector", (DL_FUNC) &_Mozza_getGenoVector, 3},
    {"_Mozza_make_haps", (DL_FUNC) &_Mozza_make_haps, 6},
    {"_Mozza_make_haps_probs", (DL_FUNC) &_Mozza_make_haps_probs, 7},
    {"_Mozza_make_inds", (DL_FUNC) &_Mozza_make_inds, 7},
    {"_Mozza_make_inds_probs", (DL_FUNC) &_Mozza_make_inds_probs, 8},
    {"_Mozza_make_pairs", (DL_FUNC) &_Mozza_make_pairs, 7},
    {"_Mozza_makeSelectedInds", (DL_FUNC) &_Mozza_makeSelectedInds, 10},
    {"_Mozza_nuclear_families", (DL_FUNC) &_Mozza_nuclear_families, 8},
    {"_Mozza_nuclear_families_probs", (DL_FUNC) &_Mozza_nuclear_families_probs, 9},
    {"_Mozza_pasteVcfElts", (DL_FUNC) &_Mozza_pasteVcfElts, 6},
    {"_Mozza_population", (DL_FUNC) &_Mozza_population, 10},
    {"_Mozza_essai", (DL_FUNC) &_Mozza_essai, 0},
    {"_Mozza_test_cursor", (DL_FUNC) &_Mozza_test_cursor, 0},
    {"_Mozza_essai2", (DL_FUNC) &_Mozza_essai2, 0},
    {"_Mozza_essai3", (DL_FUNC) &_Mozza_essai3, 0},
    {"_Mozza_essai3bis", (DL_FUNC) &_Mozza_essai3bis, 0},
    {"_Mozza_test_sharing", (DL_FUNC) &_Mozza_test_sharing, 3},
    {"_Mozza_test_IBD_sibs", (DL_FUNC) &_Mozza_test_IBD_sibs, 3},
    {"_Mozza_test_push_genos", (DL_FUNC) &_Mozza_test_push_genos, 1},
    {"_Mozza_test_xptr", (DL_FUNC) &_Mozza_test_xptr, 3},
    {"_Mozza_families_of_4_v0", (DL_FUNC) &_Mozza_families_of_4_v0, 4},
    {"_Mozza_families_of_4", (DL_FUNC) &_Mozza_families_of_4, 4},
    {"_Mozza_write_hap_file", (DL_FUNC) &_Mozza_write_hap_file, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_Mozza(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
