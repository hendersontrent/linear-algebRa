#include <Rcpp.h>
using namespace Rcpp;

// This C++ program builds matrix multiplication from scratch

//---------------------------------------------------
// OPERATION 1: MATRIX MULTIPLICATION (INNER PRODUCT)
//---------------------------------------------------

// [[Rcpp::export]]
NumericMatrix matmul(NumericMatrix A, NumericMatrix B) {
  
  // Check if # cols in 1st matrix matches # rows in 2nd matrix
  
  int rowA = A.nrow();
  int colA = A.ncol();
  int rowB = B.nrow();
  int colB = B.ncol();
  
  if(colA != rowB){
    Rcpp::stop("Number of columns in matrix A should be equal to the number of rows in matrix B.");
  }
  
  // Instantiate new matrix to be empty
  
  NumericMatrix C(rowA, colB);
  
  // Multiply correct elements of both to produce new matrix
  // This is row i and col k from A * row k and col j from B
  
  for(int i = 0; i < rowA; i++){
    for(int j = 0; j < colB; j++){
      for(int k = 0; k < colA; k++){
        C[i][j] += A[i][k]*B[k][j];
      }
    }
  }
  return C;
}
