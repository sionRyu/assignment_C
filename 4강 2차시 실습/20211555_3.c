#include<stdio.h> 
int factorial(int num);

int main(void)
{
	int fac_num;
	printf("input: ");
	scanf("%d",&fac_num);
        printf("%d! is %d\n",fac_num,factorial(fac_num));
}

int factorial(int num)
{
	if(num != 0)
	{
		return num*factorial(num-1);
	}
	else
	{
		return 1;
	}
}

