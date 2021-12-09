#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
	int data;
	struct node* next;
}QUEUE_NODE;

typedef struct {
	QUEUE_NODE* front;
	QUEUE_NODE* rear;
	int count;
}QUEUE;

void Exit(QUEUE* q);
void Enqueue(QUEUE* q);
void PrintAll(QUEUE q);

int main(void)
{
	QUEUE* q = (QUEUE*)malloc(sizeof(QUEUE));
	q->count = 0;
	q->rear = NULL;
	int a;
	printf("------Menu------\n-0 : Exit\n-1 : Enqueue\n-2 : Print All\n\n");
	while (1)
	{
		printf("Select > ");
		scanf("%d", &a);
		switch (a)
		{
		case 0:
			Exit(q);
			break;
		case 1:
			Enqueue(q);
			break;
		case 2:
			PrintAll(*q);
			break;
		default:
			break;
		}
	}
}

void Exit(QUEUE* q) {
	printf("\n");
	QUEUE_NODE* pDlt;
	if (q->count == 0)
	{
		free(q);
		exit(0);
	}
	else if (q->count == 1)
	{
		pDlt = q->front;
		free(pDlt);
		free(q);
		exit(0);
	}
	else
	{
		while (1)
		{
			if ((q->rear) != NULL)
			{
				pDlt = q->rear;
				q->rear = pDlt->next;
				free(pDlt);
			}
			else
			{
				break;
			}
		}
	}
	free(q->front);
	free(q);
	exit(0);
}

void Enqueue(QUEUE* q) {

	int d;
	QUEUE_NODE* pNew;
	pNew = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));
	printf("Input Data > ");
	scanf("%d", &d);
	pNew->data = d;
	pNew->next = NULL;
	printf("\n");

	if (q->count == 0)
	{
		q->front = pNew;
	}
	else
	{
		q->rear->next = pNew;
	}
	q->count++;
	q->rear = pNew;
}

void PrintAll(QUEUE q) {
	QUEUE_NODE* pCur;
	if (q.count == 0)
	{
		return;
	}

	pCur = q.front;
	printf("%d", pCur->data);

	while (pCur->next != NULL)
	{
		pCur = pCur->next;
		printf("->%d", pCur->data);
	}
	printf("\n\n");
}