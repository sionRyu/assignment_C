#include <stdio.h>

void addition(int *num1,int num2);

void main()
{
	int a;
	int b;
	printf("Input a number: ");
	scanf("%d", &a);

	b=10;
	printf("\naddition(%d,%d): ",a,b);
	addition(&a,b);
	printf("%d\n",a);

	b=4;
	printf("addition(%d,%d): ",a,b);
	addition(&a,b);
	printf("%d\n",a);

	b=-3;
	printf("addition(%d,%d): ",a,b);
	addition(&a,b);
	printf("%d\n",a);
}

void addition(int *num1, int num2)
{
	*num1 += num2;
}



