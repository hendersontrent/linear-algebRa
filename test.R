#-----------------------------------------
# This script sets out to test the manual
# linear algebra functions that have been
# written in C++
#-----------------------------------------

#-----------------------------------------
# Author: Trent Henderson, 11 January 2021
#-----------------------------------------

library(Rcpp)

#------------------ Create necessary test objects ------------------

# 2 matrices

A <- matrix(3, nrow = 3, ncol = 2)
B <- matrix(2, nrow = 2, ncol = 4)

# Scalar

x <- 5

# Vector

z <- matrix(4, nrow = 2, ncol = 1)

#------------------ Operation 1: Matrix multiplication -------------

sourceCpp(file = "linalg/matmul.cpp")

#------------------ Operation 2: Matrix transposition --------------

sourceCpp(file = "linalg/transpose.cpp")

#------------------ Operation 3: Scalar multiplication -------------

sourceCpp(file = "linalg/scalarmul.cpp")

#------------------ Operation 4: Matrix addition -------------------

sourceCpp(file = "linalg/matadd.cpp")

#------------------ Operation 5: Vector addition -------------------

sourceCpp(file = "linalg/vecadd.cpp")

#------------------ Operation 6: Matrix-vector product -------------

sourceCpp(file = "linalg/matvecmul.cpp")
