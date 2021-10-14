#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

void RandomGeneration(int ar[][4], int br[][4]);
void Multiplication(int ar[][4], int br[][4], int dr[][4]);
void Exit(int ar[][4]);

int main(void)
{
	int a[4][4];
	int b[4][4];
	int d[4][4];
	int c;

	while (true)
	{
		printf("**********************\n1. Random Generation\n2. Multiplication\n3. exit\n**********************\nInput Command : ");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			RandomGeneration(a, b);
			continue;
		case 2:
			Exit(a);
			break;
		}
	}
}

void RandomGeneration(int ar[][4], int br[][4])
{
	srand(time(NULL));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ar[i][j] = rand() % 101;
			br[i][j] = rand() % 101;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%5d", ar[i][j]);
		}

		printf("     ");

		for (int j = 0; j < 4; j++)
		{
			printf("%5d", br[i][j]);
		}
		printf("\n");
	}
}

void Multiplication(int ar[][4], int br[][4], int dr[][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			dr[i][j] = ar[i][j] * br[i][j];
			printf("%7d", dr[i][j]);
		}
		printf("\n");
	}
}

void Exit(int ar[][4])
{
	exit(0);
}