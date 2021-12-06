#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _NODE {
	int id;
	char name[30];
	struct _NODE* link;
}NODE;

NODE* pList;
NODE* head;

int n = 0;

void create_node(int id, char* name);

void PrintList();

int main(void)
{
	int a = 2, id;
	char* name = (char*)malloc(sizeof(char) * 30);
	NODE* head = (NODE*)malloc(sizeof(NODE));

	printf("[Select Menu]\n1 Insert a new student\n2 Print list\n");

	while (a == 1 || a == 2)
	{
		printf(">");
		scanf("%d", &a);
		if (a == 1)
		{
			printf("Enter a student: ");
			scanf("%d/%s", &id, name);
			create_node(id, name);
		}
		else if (a == 2)
		{
			PrintList();
			printf("\n");
		}
		else
		{
			free(head);
			free(name);
			return 0;
		}
	}
}

void create_node(int id, char* name)
{
	NODE* pNew;
	pNew = (NODE*)malloc(sizeof(NODE));
	strcpy(pNew->name, (char*)malloc(sizeof(char) * 10));
	pNew->id = id;
	strcpy(pNew->name, name);
	pNew->link = NULL;

	if (head == NULL)
	{
		head = pNew;
	}
	else
	{
		NODE* now = head;
		while (now->link != NULL)
		{
			now = now->link;
		}
		now->link = pNew;
	}
}

void PrintList()
{
	NODE* now = head;
	while (now != NULL)
	{
		printf("[%d/%s] -> ", now->id, now->name);
		now = now->link;
	}
	printf("NULL");
}