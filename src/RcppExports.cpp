// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// timesAll
NumericVector timesAll(NumericVector x);
RcppExport SEXP _header_reprex_timesAll(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesAll(x));
    return rcpp_result_gen;
END_RCPP
}
// timesThree
NumericVector timesThree(NumericVector x);
RcppExport SEXP _header_reprex_timesThree(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesThree(x));
    return rcpp_result_gen;
END_RCPP
}
// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP _header_reprex_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_header_reprex_timesAll", (DL_FUNC) &_header_reprex_timesAll, 1},
    {"_header_reprex_timesThree", (DL_FUNC) &_header_reprex_timesThree, 1},
    {"_header_reprex_timesTwo", (DL_FUNC) &_header_reprex_timesTwo, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_header_reprex(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}