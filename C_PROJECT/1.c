#include "20211555.h"

int main() {

	FILE* file = fopen("matrix.txt", "r");

	int n;
	fscanf(file, "%d", &n);
	if (n <= 0)
	{
		return 0;
	}

	int** arr;
	arr = (int**)malloc(sizeof(int*) * n);

	for (int q = 0; q < n; q++)
	{
		*(arr + q) = (int*)malloc(sizeof(int) * n);
	}

	for (int i = 0; i < n; i++)
	{
		fscanf(file, "%d %d %d %d %d", (*(arr+i)+0 ),(*(arr + i)+1), (*(arr + i) + 2), (*(arr + i) + 3), (*(arr + i) + 4));
	}

	if (n == 5)
	{
		
	}
	else if (n == 4)
	{

	}
	else if (n == 3)
	{

	}
	else if (n == 2)
	{

	}
	else if (n == 1)
	{

	}

	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < n; y++)
		{
			printf("%lf ", *(*(arr + x) + y));
		}
		printf("\n");
	}




	for (int m = 0; m < n; m++)
	{
		free(*(arr + m));
	}
	free(arr);

	return 0;
}

//det 만들기

double** sliceMatrix(double** matrix, int sliceC, int sliceR, int n)
{
	//새로운 2차원 배열 선언과 동적 할당, 
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
}// det을 사용하면 sliceMtrix를 여러번 아마 n-1번만큼 사용한다 그리고 sum에다가 그 계산값을 매번 더해준다
