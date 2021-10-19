#include <stdio.h>

void swap1(int* p1, int* p2);
void swap2(int** p1, int** p2);

int main(void)
{
	int n1 = 10;
	int n2 = 20;
	int* np1 = &n1;
	int* np2 = &n2;
	int** npp1 = &np1;
	int** npp2 = &np2;

	printf("original value\n num1 : %d, num2 : %d", n1, n2);

	swap1(np1, np2);
	
	printf("\nChanged value by Pointer\nnum1 : %d, num2 : %d", np1, np2);

	swap2(*np1, *np2);

	printf("\nChanged value by Pointer\nnum1 : %d, num2 : %d", np1, np2);
}

void swap1(int* p1, int* p2)
{
	int de;
	de = p1;
	p1 = p2;
	p2 = de;
}

void swap2(int **p1, int **p2)
{
	int de;
	de = **p1;
	**p1 = **p2;
	**p2 = de;
}