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
		for (int j = 0; j < n; j++)
		{
			*(*(arr + i) + j) = fgetc(file);
		}
	}

	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < n; y++)
		{
			printf("%d ", *(*(arr + y) + x) );
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