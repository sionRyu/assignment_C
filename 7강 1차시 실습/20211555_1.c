#include <stdio.h>

int main(void)
{
	char a = 'a';
	int b = 0;
	double c = 0.000000;

	char* ap = &a;
	int* bp = &b;
	double* cp = &c;

	printf("original value\nchar : %c , int : %d, double : %lf\n", a, b, c);
	printf("\nchange value by using pointer\n");
	printf("Input new char value : ");
	scanf("%c", ap);
	printf("Input new int value : ");
	scanf("%d", bp);
	printf("Input new double value : ");
	scanf("%lf", cp);
	printf("\n");

	if (a == *ap, b == *bp, c == *cp)
	{
		printf("Changed values \n char : %c , int : %d, double : %lf\n", a, b, c);

		printf("What pointer include => char : %c , int : %d, double : %lf\n", *ap, *bp, *cp);
	}
	else
	{
		printf("Doesn't Change");
	}
}