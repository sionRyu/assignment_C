#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int* intArr = (int*)calloc(1, sizeof(int));
	int** intArr_2;
	int size = 4;
	int cnt = 0;

	if (cnt == 0)
	{
		intArr = (int*)realloc(intArr, size * sizeof(int));
	}

	while (getc(stdin) == ' ')
	{
		scanf("%d", intArr + cnt);
		if (cnt >= size)
		{
			size *= 2;
			intArr = (int*)realloc(intArr, size * sizeof(int));
		}
		cnt++;
	}

	intArr_2 = (int**)malloc(sizeof(int*) * 3);
	for (int i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			if (cnt % 3 == 1)
			{
				*(intArr_2 + i) = (int*)malloc(sizeof(int) * (cnt / 3 + 1));
				*(*(intArr_2 + cnt / 3) + i) = *(intArr + cnt - 1);

			}
			else if (cnt % 3 == 2)
			{
				*(intArr_2 + i) = (int*)malloc(sizeof(int) * (cnt / 3 + 2));
				*(*(intArr_2 + cnt / 3) + i) = *(intArr + cnt - 2);
				*(*(intArr_2 + cnt / 3 + 1) + i) = *(intArr + cnt - 1);
			}
		}
		else
		{
			*(intArr_2 + i) = (int*)malloc(sizeof(int) * cnt / 3);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < cnt / 3; j++)
		{
			if (i == 0)
			{
				*(*(intArr_2 + j) + i) = *(intArr + j);
			}
			else if (i == 1)
			{
				*(*(intArr_2 + j) + i) = *(intArr + j + cnt / 3);
			}
			else
			{
				*(*(intArr_2 + j) + i) = *(intArr + j + (cnt / 3) * 2);
			}
		}
	}



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < cnt / 3; j++)
		{

			printf("%d ", intArr_2[i][j]);

		}

		if (i == 2)
		{
			if (cnt % 3 == 1)
			{
				printf("%d ", intArr_2[i][cnt / 3]);
			}
			else if (cnt % 3 == 2)
			{
				printf("%d ", intArr_2[i][cnt / 3]);
				printf("%d ", intArr_2[i][cnt / 3 + 1]);
			}
		}
		printf("\n");
	}
}