#include <Rcpp.h>
using namespace Rcpp;

// This C++ program builds matrix addition from scratch

//-----------------------------
// OPERATION 4: MATRIX ADDITION
//-----------------------------

// [[Rcpp::export]]
NumericMatrix matadd(NumericMatrix A, NumericMatrix B){
  
  // Check if # cols in 1st matrix matches # rows in 2nd matrix
  
  int rowA = A.nrow();
  int colA = A.ncol();
  int rowB = B.nrow();
  int colB = B.ncol();
  
  if(rowA != rowB){
    Rcpp::stop("Number of rows in matrix A should be equal to the number of rows in matrix B.");
  }
  
  if(colA != colB){
    Rcpp::stop("Number of columns in matrix A should be equal to the number of columns in matrix B.");
  }
  
  // Instantiate new matrix to be empty
  
  NumericMatrix C(rowA, colA);
  
  // Add correct elements of both to produce new matrix
  
  for(int i = 0; i < rowA; i++){
    for(int j = 0; j < colA; j++){
        C[i][j] += A[i][j]*B[i][j];
      }
    }
  return C;
}
