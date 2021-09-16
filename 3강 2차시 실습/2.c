#include <stdio.h>

void multiple(int *num1);

int a = 0;

void main()
{
	int b = 3;
	printf("global number: ");
	scanf("%d",&a);

	printf("\nmultiplication(%d) = ",b);
	multiple(&b);
	printf("%d\n",b);

	b = 10;
	printf("multiplication(%d) = ",b);
	multiple(&b);
	printf("%d\n",b);

	b = 5;
	printf("multiplication(%d) = ",b);
	multiple(&b);
	printf("%d\n",b);
}

void multiple(int *num1)
{
	 *num1 *= a;
}
