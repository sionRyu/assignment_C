#include <stdio.h>

int main(void)
{
	char str[41];
	char* sPtr;
	int sumC = 0, sumc = 0, sumO = 0, cnt = 0;

	sPtr = str;
	FILE* file = fopen("input.txt", "r");


	while (fgets(sPtr, sizeof(str), file) != NULL)
	{
		fputs(sPtr, stdout);

		while (*(sPtr + cnt) != '\n')
		{
			if ('A' <= *(sPtr + cnt) && *(sPtr + cnt) <= 'Z')
			{
				sumC++;
			}
			else if ('a' <= *(sPtr + cnt) && *(sPtr + cnt) <= 'z')
			{
				sumc++;
			}
			else
			{
				sumO++;
			}
			cnt++;
		}
		cnt = 0;
		printf("small: %d Big: %d Other: %d\n\n", sumc, sumC, sumO);
		sumc = 0, sumC = 0, sumO = 0;
	}

	fclose(file);
}