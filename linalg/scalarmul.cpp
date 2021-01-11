#include <Rcpp.h>
using namespace Rcpp;

// This C++ program builds scalar-matrix multiplication from scratch

//-----------------------------------
// OPERATION 3: SCALAR MULTIPLICATION
//-----------------------------------

// [[Rcpp::export]]
NumericMatrix scalarmul(NumericMatrix A, double x){
  
  // Get matrix size
  
  NumericMatrix::Row m = A(1 , _ ).size();
  NumericMatrix::Column n = A( _ , 1).size();
  
  // Instantiate new matrix to be empty
  
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j){
      scalarmult[i][j] = 0;
    }
  }
