#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
	int std_id;
	char name[20];
	int marks[4];
	int rank;
};

int main(void)
{
	int cmd_n = 0, n = 0;
	int avg[10] = { 0 };
	struct Student* std = (struct Student*)malloc(sizeof(struct Student) * 10);
	for (int l = 0; l < 10; l++)
	{
		(std + l)->rank = 0;
	}

	FILE* file = fopen("Student.txt", "rw");

	while (fscanf(file, "%d %s %d %d %d %d", &((std + n)->std_id), ((std + n)->name), &((std + n)->marks[0]), &((std + n)->marks[1]), &((std + n)->marks[2]), &((std + n)->marks[3])) != -1)
	{
		avg[n] = (std[n].marks[0] + std[n].marks[1] + std[n].marks[2] + std[n].marks[3]) / 4;
		n++;
	}

	for (int k = 0; k < 10; k++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (avg[k] < avg[j])
			{
				std[k].rank++;
			}
		}
	}

	while (cmd_n != 3)
	{
		printf("1-search on number\n2-search on name\n3-finish\n\n? ");
		scanf("%d", &cmd_n);
		if (cmd_n == 1)
		{
			int std_idnum;
			int s_n;
			printf("Input student number ");
			scanf("%d", &std_idnum);
			for (int i = 0; i < 10; i++)
			{
				if (std[i].std_id == std_idnum)
				{
					s_n = i;
					break;
				}
			}
			printf("\n%d %s %d %d %d %d average %d rank %d\n", std[s_n].std_id, std[s_n].name, std[s_n].marks[0], std[s_n].marks[1], std[s_n].marks[2], std[s_n].marks[3], avg[s_n], std[s_n].rank);
		}
		else if (cmd_n == 2)
		{
			char* s_name = (char*)malloc(sizeof(char) * 20);
			int s_n[10] = { 0 };
			int Num = 0;
			printf("Input student name ");
			scanf("%s", s_name);
			for (int i = 0; i < 10; i++)
			{
				if (strcmp(std[i].name, s_name) == 0)
				{
					printf("\n%d %s %d %d %d %d average %d rank %d", std[i].std_id, std[i].name, std[i].marks[0], std[i].marks[1], std[i].marks[2], std[i].marks[3], avg[i], std[i].rank);
				}
			}
			free(s_name);
			printf("\n");
		}
	}

	free(std);
	printf("\n");
	fclose(file);
	return 0;

}