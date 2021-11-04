#include <stdio.h>
#include <stdlib.h>

int* get_next_process(int* prev_pointer, int size);
int main(void)
{
	int n;
	int* arr = (int*)malloc(n * sizeof(int));
	int check = 0;

	scanf("%d", &n);

	while (check == 0)
	{
		if (sizeof(*get_next_process(arr, n)) == 4)
		{
			check = 1;
		}
		else
		{
			*get_next_process(arr, n);
		}
	}
}

int* get_next_process(int* prev_pointer, int size)
{
	int next_size;
	int* next_pointer;

	if (size % 2 == 1)
	{
		next_size = (size - 1) / 2;
	}
	else
	{
		next_size = size / 2;
	}

	next_pointer = (int*)malloc(next_size * sizeof(int));
	for (int i = 0; i < next_size; i++)
	{

	}

	if (size == )
	{

	}

	return next_pointer;
}