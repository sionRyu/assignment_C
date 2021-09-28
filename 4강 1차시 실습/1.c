#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y);

void compare(int *x,int *y);

int main(void)
{
	int a,b,c;
	printf("please input 3 integers : ");
        scanf("%d %d %d",&a,&b,&c);

	a=abs(a);
	b=abs(b);
	c=abs(c);

	compare(&a,&b);
	compare(&b,&c);
	compare(&a,&c);
	compare(&a,&b);

	printf("\nresult: %d %d %d\n",a,b,c);
}

void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void compare(int *x,int *y)
{
	if(*x > *y)
	{
		swap(x,y);
	}
	else
	{
		return;
	}
}
