#include <stdio.h>

int main(void)
{

	int num1=0,num2=0,diff=0;
	
	printf("input two numbers which is more 100 under 1000: ");
	scanf("%d %d",&num1,&num2);

	if(num1/100 == num2/100)
	{
		diff++;
	}
	num1 -= (num1/100)*100;
	num2 -= (num2/100)*100;
	if(num1/10 == num2/10)
	{
		diff++;
	}
	num1 -= (num1/10)*10;
	num2 -= (num2/10)*10;
	if(num1 == num2)
	{
		diff++;
	}

	printf("Hamming Distance : %d\n",diff);

}
