<<<<<<< Updated upstream
﻿#include<stdio.h>

int main(void) 
{
	printf('*' * 13);
=======
﻿#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main(void)
{
	int a, b, c;
	printf("please input 3 integers :");
	scanf("%d %d %d"&a, &b, &c);
	a = abs(a);
	b = abs(b);
	c = abs(c);

	printf("%d %d",a, b);
	swap(&a, &b);

	printf("%d %d", a, b);
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
>>>>>>> Stashed changes
}