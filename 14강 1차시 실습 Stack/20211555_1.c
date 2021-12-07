#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node* sptr;

typedef struct {
	int count;
	sptr link;
}STACK;

typedef struct node {
	int data;
	sptr link;
}STACK_NODE;

void Exit(STACK*);
void Push(STACK*);
void Pop(STACK*);
void PrintAll(STACK);

int main(void)
{
	STACK* pStack;
	pStack = (STACK*)malloc(sizeof(STACK));
	pStack->link = NULL;
	pStack->count = 0;
	int a;
	printf("------Menu------\n-0 : Exit\n-1 : Push\n-2 : Pop\n-3 : Print All\n\n");
	while (1)
	{
		printf("Select > ");
		scanf("%d", &a);
		switch (a)
		{
		case 0:
			Exit(pStack);
			break;
		case 1:
			Push(pStack);
			break;
		case 2:
			Pop(pStack);
			break;
		case 3:
			PrintAll(*pStack);
			break;
		default:
			break;
		}
	}
}

void Exit(STACK* s)
{
	printf("\n");
	STACK_NODE* pDlt;
	while (1)
	{
		if ((s->link) != NULL)
		{
			pDlt = s->link;
			s->link = pDlt->link;
			free(pDlt);
		}
		else
		{
			break;
		}
	}
	free(s);
	exit(0);
}

void Push(STACK* s)
{
	int d;
	printf("Input Data > ");
	scanf("%d", &d);
	printf("\n");
	STACK_NODE* pNew;
	pNew = (STACK_NODE*)malloc(sizeof(STACK_NODE));
	pNew->data = d;
	pNew->link = s->link;
	s->link = pNew;

	s->count++;
}

void Pop(STACK* s)
{
	STACK_NODE* pDlt;
	if ((s->link) != NULL)
	{
		pDlt = s->link;
		s->link = pDlt->link;
		s->count--;
		printf("Pop %d\n\n", pDlt->data);
		free(pDlt);
	}
	else
	{
		return;
	}
}

void PrintAll(STACK s)
{
	STACK_NODE* pCur;

	for (int i = s.count; i > 0; i--)
	{
		int k = 1;
		pCur = s.link;
		while ( k < i)
		{
			pCur = pCur->link;
			k++;
		}

		printf("%d ", pCur->data);
	}
	printf("\nStack Level : %d\n\n", s.count);
}