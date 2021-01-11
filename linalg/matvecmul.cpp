#include <Rcpp.h>
using namespace Rcpp;

// This C++ program builds matrix-vector multiplication from scratch

//-----------------------------------
// OPERATION 6: MATRIX-VECTOR PRODUCT
//-----------------------------------

// [[Rcpp::export]]
NumericVector matvecmul(NumericMatrix A, NumericVector b){
  
  // Check if # cols in 1st matrix matches # rows in 2nd matrix
  
  int rowA = A.nrow();
  int colA = A.ncol();
  int rowb = b.nrow();
  int colb = b.ncol();
  
  if(colA != rowb){
    Rcpp::stop("Number of columns in matrix A should be equal to the number of components in vector B.");
  }
  
  // Multiply correct elements of both to produce new vector with i rows and 1 column
  // This is row i and col j from A * row j from B
  
  for(int i = 0; i < rowA; i++){
    // Instantiate new vector to be empty
    c[i] = 0; 
    for(int j = 0; j < colb; j++){
        c[i] += A[i][j]*b[j];
      }
    }
  return c;
}
