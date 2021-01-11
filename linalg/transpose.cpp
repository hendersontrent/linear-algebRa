#include <Rcpp.h>
using namespace Rcpp;

// This C++ program builds matrix transposition from scratch

//----------------------------------
// OPERATION 2: MATRIX TRANSPOSITION
//----------------------------------

// [[Rcpp::export]]
NumericMatrix transpose(NumericMatrix A){
  
  // Get size of input matrix

  int row = A.nrow();
  int col = A.ncol();
  
  // Instantiate new empty matrix
  
  NumericMatrix B(row, col);
  
  // Transpose A into B by changing rows to columns and columns to rows
  
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      B[i][j] = A[j][i];
    }
  }
  return B;
}
