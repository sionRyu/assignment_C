#include<stdio.h>

int main(void)
{
	char str[41];
	char* pStr;
	int size = 0;
	int cnt = 0;
	scanf("%39s", str);
	pStr = str;

	while (*pStr != '\0')
	{
		pStr++;
		size++;
	}

	if (size % 2 == 0)
	{
		for (int i = 0; i < size / 2; i++)
		{
			if (*(str + i) != *(str + size - i - 1))
			{
				return printf("NO\n");
			}
		printf("YES\n");
	}
	else
	{
		for (int i = 0; i < size / 2; i++)
		{
			if (*(str + i) != *(str + size - i - 1))
			{
				return printf("NO\n");
			}
		}
		printf("YES\n");
	}
}