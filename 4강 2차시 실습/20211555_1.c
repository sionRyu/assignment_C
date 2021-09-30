#include <stdio.h>

int main(void)
{
	int start = 0;
	int middleNum = 5;
	int end = 11;
	printf("*************\n");
	for(int i = start; i <end; i++)
	{
		printf("* ");
		if(i==start||i==end-1)
		{
			for(int j = start; j < end-2;j++)
			{
				printf(" ");
			}
		}
		else
		{
			int inverse = 9-i;

			if(i<middleNum)
			{
				for(int k = start; k <i-1;k++)
				{
					printf(" ");
				}
				for(int l = start; l < inverse -i +2;l++)
				{
					printf("*");
				}
				for(int n = start; n < i-1;n++)
				{
					printf(" ");
				}
			}
			else
			{
				for(int k = start; k < inverse;k++)
				{
					printf(" ");
				}
				for(int l = start; l < 2*i -9;l++)
				{
					printf("*");
				}
				for(int n = start; n <inverse; n++)
				{
					printf(" ");
				}
			}
		}
		printf(" *\n");
	}
	printf("*************\n");
}

