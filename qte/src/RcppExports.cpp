// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// partial1CopulaCPP
NumericVector partial1CopulaCPP(NumericVector u, NumericVector v, double h, Function copfun);
RcppExport SEXP qte_partial1CopulaCPP(SEXP uSEXP, SEXP vSEXP, SEXP hSEXP, SEXP copfunSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< double >::type h(hSEXP );
        Rcpp::traits::input_parameter< Function >::type copfun(copfunSEXP );
        NumericVector __result = partial1CopulaCPP(u, v, h, copfun);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getListParitalQuantCPP
List getListParitalQuantCPP(NumericVector u, NumericVector v, double h, Function copfun);
RcppExport SEXP qte_getListParitalQuantCPP(SEXP uSEXP, SEXP vSEXP, SEXP hSEXP, SEXP copfunSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< double >::type h(hSEXP );
        Rcpp::traits::input_parameter< Function >::type copfun(copfunSEXP );
        List __result = getListParitalQuantCPP(u, v, h, copfun);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getJointCPP
NumericVector getJointCPP(NumericVector x, NumericVector y);
RcppExport SEXP qte_getJointCPP(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        NumericVector __result = getJointCPP(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getJointUVCPP
NumericVector getJointUVCPP(double u, NumericVector v, NumericVector x1, NumericVector y1);
RcppExport SEXP qte_getJointUVCPP(SEXP uSEXP, SEXP vSEXP, SEXP x1SEXP, SEXP y1SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type u(uSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y1(y1SEXP );
        NumericVector __result = getJointUVCPP(u, v, x1, y1);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// quantileCPP
NumericVector quantileCPP(RcppGSL::vector<double> x, NumericVector probs);
RcppExport SEXP qte_quantileCPP(SEXP xSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RcppGSL::vector<double> >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP );
        NumericVector __result = quantileCPP(x, probs);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getListQuantilesCPP
List getListQuantilesCPP(List partialvals, NumericVector t);
RcppExport SEXP qte_getListQuantilesCPP(SEXP partialvalsSEXP, SEXP tSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type partialvals(partialvalsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP );
        List __result = getListQuantilesCPP(partialvals, t);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// testy
int testy();
RcppExport SEXP qte_testy() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        int __result = testy();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// meanC
double meanC(NumericVector x);
RcppExport SEXP qte_meanC(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        double __result = meanC(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP qte_rcpp_hello_world() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        List __result = rcpp_hello_world();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}