#include<stdio.h>
#include<stdlib.h>

double** sliceMatrix(double** beforeMatrix, int sliceC, int sliceR);

int main(void)
{
	int sum = 0;
	double** A;
	double** sliceMatrix;

}


double** sliceMatrix(double** matrix, int sliceC, int sliceR, int n) {
	double** rMatrix = (double**)malloc(sizeof(double**) * n);
	// 2차원 배열 동적 할당, 
	for (int i = 0; i < n; i++)
	{
		if (i == sliceC)
		{

		}
		for (int j = 0; j < n; j++)
		{
			(rMatrix)
		}

		sum +=
	}
}