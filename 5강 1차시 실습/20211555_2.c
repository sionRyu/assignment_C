#include<stdio.h>

int main(void)
{
	int wirte_file_state;
	int k;
	int n;
	FILE *file = fopen("a.txt", "w");
	if (file == NULL)
	{
		printf("write file open error!\n");
		return 1;
	}

	while (1)
	{
		k = getchar();
		if (k == 'Q')
		{
			break;
		}
		fputc(k,file);
	}
	
	int write_file_state = fclose(file);
	if (write_file_state != 0)
	{
		printf("write file close error!\n");
	}

	FILE* file2 = fopen("a.txt", "r");
	if (file2 == NULL)
	{
		printf("read file open error!\n");
		return 1;
	}

	while (1)
	{
		n = fgetc(file2);
		if (n==EOF)
		{
			break;
		}
		putchar(n);
	}
}