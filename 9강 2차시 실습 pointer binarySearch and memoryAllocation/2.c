#include <stdio.h>

void find(int* arr, int n);

int main(void)
{
	int n;
	int arr[100] = { 10 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	find(arr, n);
}

void find(int* arr, int n)
{
	int sum = 0;
	printf("<result>\n");
	for (int i = 0; i < 10; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (i == *(arr + j))
			{
				sum++;
			}
		}
		printf("%d\n", sum);
	}
}