#include <stdio.h>

double factorial(int n);

int main(void)
{
	double e=0;
	double limit_error=0;
	double factorialResult=0;
	int num=0;

	printf("Calculating Euler's number, input error range epsilon: ");
	scanf("%lf", &limit_error);

	do
	{
		factorialResult = 1/factorial(num);
		e += factorialResult;
		num++;
	}
	while(factorialResult > limit_error);
	printf("%lf\n", e);
}

double factorial(int n)
{
	if(n != 0)
	{
		return n * factorial(n-1);
	}
	else
	{
		return 1;
	}
}
