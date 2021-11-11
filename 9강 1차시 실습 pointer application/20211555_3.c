#include <stdio.h>

int main(void)
{
	int n;
	int arr_a[100][100] = { 0 };

	printf("<Input number>\n");
	scanf("%d", &n);

	printf("<result>\n");
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			*(*(arr_a + i) + j) = j * n + i + 1;
			printf("%-3d", *(*(arr_a + i) + j));
		}
		printf("\n");
	}
}