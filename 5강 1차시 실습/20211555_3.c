#include <stdio.h>

int main(void)
{
	int read_state, write_state;
	char str1[20];
	int n;
	FILE* file = fopen("a.txt", "r");
	if (file == NULL)
	{
		printf("read file open error!\n");
	}

	printf("file name : ");
	scanf("%s", str1);

	FILE* file2 = fopen(str1, "w");
	if (file2 == NULL)
	{
		printf("write file open error!\n");
		return 1;
	}

	while (1)
	{
		n = fgetc(file);
		if (n == EOF)
		{
			break;
		}
		else if (n == '\n')
		{
			fputc(n, file2);
			fputc('\n',file2);
			continue;
		}
		fputc(n, file2);
	}

	read_state = fclose(file);
	if (read_state != 0)
	{
		printf("read file close error!\n");
	}

	write_state = fclose(file2);
	if (write_state != 0)
	{
		printf("write file close error!\n");
	}

	FILE* file3 = fopen(str1, "r");
	if (file3 == NULL)
	{
		printf("read file open error!\n");
		return 1;
	}
	
	while (1)
	{
		n = fgetc(file3);
		if (n == EOF)
		{
			break;
		}
		putchar(n);
	}

	read_state = fclose(file3);
	if (read_state != 0)
	{
		printf("read file close error!\n");
	}
}