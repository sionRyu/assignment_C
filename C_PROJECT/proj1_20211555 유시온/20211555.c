#include "20211555.h"

int main(){

	FILE* file = fopen("matrix.txt", "rw");
	int c_size = 0;

	c_size = fscanf(file, "%d");
	int* arr[6];
	int arr[6] = malloc(sizeof(int) * c_size);

	int* arr[5];


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = fgetc(file);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}