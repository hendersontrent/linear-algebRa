#include <Rcpp.h>
using namespace Rcpp;

// This C++ program builds scalar-matrix multiplication from scratch

//-----------------------------------
// OPERATION 3: SCALAR MULTIPLICATION
//-----------------------------------

// [[Rcpp::export]]
NumericMatrix scalarmul(NumericMatrix A, double x){
  
  // Get matrix size
  
  int row = A.nrow();
  int col = A.ncol();
  
  // Instantiate new matrix to be empty
  
  NumericMatrix B(row, col);
  
  for(int i = 0; i < row; ++i){
    for(int j = 0; j < col; ++j){
      B[i][j] = A[i][j]*x;
    }
    
  return B;
}
