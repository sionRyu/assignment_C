#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* file = fopen("data.txt", "rw");
	char* str;
	char* strComp[1000];
	char strData[1001];
	int cnt = 0;
	int result = 0;

	fgets(strData, 1000, file);

	str = strtok(strData, " ");

	strComp[cnt] = str;

	cnt++;


	while (str = strtok(NULL, " "))
	{
		strComp[cnt] = str;
		if (strComp[cnt] == "the" || strComp[cnt] == "The")
		{
			result++;
		}
		strcmp(strComp[cnt], strComp[cnt - 1]);
		cnt++;
	}

	printf("total number is %d\n", result);
}