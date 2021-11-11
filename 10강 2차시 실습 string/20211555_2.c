#include <stdio.h>

void printByWord(char* str);

int main(void)
{
	char str[41];
	char* sPtr;
	int cnt;

	sPtr = str;


	printf("Input string:\n");

	fgets(sPtr, sizeof(str), stdin);

	printf("<result>\n");
	printByWord(sPtr);
}

void printByWord(char* str)
{
	while (*(str) != '\n')
	{
		if (*(str) == ' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c", *(str));
		}
		str++;
	}
	printf("\n");
}