#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _NODE {
	char data;
	struct _NODE* link;
}NODE;

void InsertNodeAt(char a, int index);
void PrintList();

NODE* head = (NODE*)malloc(sizeof(NODE));
int indexNum;

int main(void)
{
	InsertNodeAt('p', 0);
	InsertNodeAt('p', 0);
	InsertNodeAt('e', 100);
	InsertNodeAt('a', 0);
	InsertNodeAt('l', 3);
	PrintList();

}

void InsertNodeAt(char a, int index)
{
	NODE* pNew;
	pNew = (NODE*)malloc(sizeof(NODE));
	pNew->data = a;
	if (head == NULL)
	{
		head = pNew;
	}
	else
	{
		if (index > indexNum)
		{
			NODE* now = head;
			while (now->link != NULL)
			{
				now = now->link;
			}
			now->link = pNew;
			pNew->link = NULL;
		}
		else
		{
			pNew->link = head;
			head = pNew;
		}
	}
	indexNum++;
}

void PrintList()
{
	NODE* now = head;
	printf("PrintList(): ");
	while (now != NULL)
	{
		printf("%c", now->data);
		now = now->link;
	}

}