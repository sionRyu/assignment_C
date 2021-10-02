<<<<<<< Updated upstream
#include<stdio.h>

int main(void)
{
	float a=0,b=0,result=0;
	int c =0;
	char operation;
	printf("please input integer\na = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("============\n1. plus\n2. minus\n3. multiple\n4. divide\n============\n");
	scanf("%d",&c);

	switch(c)
	{
	case 1:result = a + b; operation = '+';break;
	case 2:result = a - b; operation = '-';break;
	case 3:result = a * b; operation = '*';break;
	case 4:result = a / b; operation = '/';break;

	default:
		break;
	}

	printf("a %c b = %.f\n", operation, result);
}
