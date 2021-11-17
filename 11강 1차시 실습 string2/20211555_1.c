#include<stdio.h>
#include<string.h>

int main(void)
{
	//strlen 통해서 11글자 
	char str1[11];
	char str2[11];
	char str3[21];
	int size;

	printf("Please insert a sentence : ");
	scanf("%s", str1);


	strcpy(str2, str1);
	size = strlen(str1);

	for (int i = 0; i < size; i++)
	{
		str2[i] = str1[size - i - 1];
	}

	str2[size] = '\0';


	if (strcmp(str1, str2) == 0)
	{
		printf("%s", str2);
	}
	else if (strcmp(str1, str2) != 0)
	{
		strcpy(str3, str1);
		strcat(str3, str2);
		printf("%s", str3);
	}
	printf("\n");
}
