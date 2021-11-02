#include <stdio.h>

void swap(int* a, int* b);
void sort(int* a, int n);
void print_array(int* a, int n);

int main(void)
{
	int n;
	int arr_a[1000] = {5};
	printf("Length of array : ");
	scanf("%d", &n);
	printf("Before : ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", arr_a+i);
	}
	sort(arr_a, n);
	print_array(arr_a, n);
}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

void sort(int* a, int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (*(a+i) > *(a+i+1))
			{
				swap((a + i), (a + i + 1));
			}
		}
	}
	return;
}

void print_array(int *a, int n)
{
	printf("AfterSort: ");
	for (int i = 1; i < n+1; i++)
	{
		printf("%d ",*(a + i));
	}
	printf("\n");
}