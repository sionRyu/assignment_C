#include<stdio.h>
#include<stdlib.h>

double detA(double** A, int n);
double** cofacotrMatrix(double** A, int n);
double** transposeMatrix(double** A, int n);
double** inverseMatrix(double** A, double det, int n);
double** inverseCheckMatrix(double** A, double** B, int n);
void printMatrix(double** A, int n);
double** sliceMatrix(double** matrix, int sliceC, int sliceR, int n);