#include "20211555.h"

int main() {

	FILE* file = fopen("matrix.txt", "r");

	int n;
	fscanf(file, "%d", &n);
	if (n <= 0)
	{
		return 0;
	}

	double** arr;
	arr = (double**)malloc(sizeof(double*) * n);

	for (int q = 0; q < n; q++)
	{
		*(arr + q) = (double*)malloc(sizeof(double) * n);
	}

	for (int i = 0; i < n; i++)
	{
		fscanf(file, "%lf %lf %lf %lf %lf", (*(arr+i)+0 ),(*(arr + i)+1), (*(arr + i) + 2), (*(arr + i) + 3), (*(arr + i) + 4));
	}


	printMatrix(arr, n);



	for (int m = 0; m < n; m++)
	{
		free(*(arr + m));
	}
	free(arr);

	return 0;
}


double detA(double** A, int n) 
{
	if (n == 5)
	{
		sliceMatrix
	}
	else if (n == 4)
	{

	}
	else if (n == 3)
	{

	}
	else if (n == 2)
	{
		if (true)
		{

		}
	}
	else if (n == 1)
	{
		return *(*(A));
	}
}


double calcluate(double** matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (n%2 == 0)
		{

		}
		
	}
}

double** sliceMatrix(double** matrix, int sliceC, int sliceR, int n)
{
	//���ο� 2���� �迭 ����� ���� �Ҵ�, 
	for (int c = 0; c < n - 1; c++)
	{
		for (int r = 0; r < n - 1; r++)
		{
			if (r >= sliceR && c >= sliceC)
			{
				*(*(matrix + c) + r) = *(*(matrix + c + 1) + r + 1);
			}
			else if (r >= sliceR && c < sliceC)
			{
				*(*(matrix + c) + r) = *(*(matrix + c) + r + 1);
			}
			else if (r < sliceR && c >= sliceC)
			{
				*(*(matrix + c) + r) = *(*(matrix + c + 1) + r);
			}
			else
			{
				*(*(matrix + c) + r) = *(*(matrix + c) + r);
			}
		}
	}
	return matrix;
}// det�� ����ϸ� sliceMtrix�� ������ �Ƹ� n-1����ŭ ����Ѵ� �׸��� sum���ٰ� �� ��갪�� �Ź� �����ش�


void printMatrix(double** A, int n)
{
	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < n; y++)
		{
			printf("%.2lf ", *(*(arr + x) + y));
		}
		printf("\n");
	}
}