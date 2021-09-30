#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
	int n;
	printf("input(n) : ");
	scanf("%d",&n);
	printf("F%d is %d\n",n,Fibonacci(n));
}

int Fibonacci(int n)
{
	if(n!=0 && n!=1)
	{
		int result = Fibonacci(n-1) + Fibonacci(n-2) ;
		return result;
	}
	else if(n == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}
