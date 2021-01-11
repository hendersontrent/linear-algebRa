#include <Rcpp.h>
using namespace Rcpp;

// This C++ program builds matrix multiplication from scratch

//---------------------------------------------------
// OPERATION 1: MATRIX MULTIPLICATION (INNER PRODUCT)
//---------------------------------------------------

// [[Rcpp::export]]
NumericMatrix matmul(NumericMatrix A, NumericMatrix B) {
  
  // Check if # cols in 1st matrix matches # rows in 2nd matrix
  
  NumericMatrix::Row rowA = A(1 , _ ).size();
  NumericMatrix::Row rowB = B(1 , _ ).size();
  NumericMatrix::Column colA = A( _ , 1).size();
  NumericMatrix::Column colB = B( _ , 1).size();
  
  if(colA != rowB){
    Rcpp::stop("Number of columns in matrix A should be equal to the number of rows in matrix B.");
  }
  
  // Instantiate new matrix to be empty
  
  for(int i = 0; i < rowA; ++i){
    for(int j = 0; j < colB; ++j){
      matmul[i][j] = 0;
    }
  }
  
  // Multiply correct elements of both to produce new matrix
  // This is row i and col k from A * row k and col j from B
  
  for(int i = 0; i < rowA; ++i){
    for(int j = 0; j < colB; ++j){
      for(int k = 0; k < colA; ++k){
        matmul[i][j] += A[i][k]*B[k][j];
      }
    }
  }
  return matmul;
}
  
  // Multiple each ith-jth element of A by x
  
  for(int i = 0; i < m; ++i){
    for(int j = 0; j < n; ++j){
      scalarmult[i][j] = A[i][j]*x;
    }
  }
  return scalarmult;
}
