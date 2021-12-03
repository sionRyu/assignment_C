#include<stdio.h>
#include<stdlib.h>

typedef struct _NODE {
    char data;
    struct _NODE* link;
}NODE;

NODE* head = NULL;
int num = 0;

void InsertNodeAt(char c, int index);
void DeleteNodeAt(int index);
void PrintList();

int main() {
    InsertNodeAt('n', 0);
    InsertNodeAt('e', 0);
    InsertNodeAt('p', 0);
    InsertNodeAt('l', 3);
    InsertNodeAt('o', 0);
    InsertNodeAt('a', 5);
    InsertNodeAt('b', 6);
    PrintList();
    DeleteNodeAt(1);
    DeleteNodeAt(10);
    DeleteNodeAt(1);
    DeleteNodeAt(1);
    PrintList();
    return 0;
}

void InsertNodeAt(char c, int index)
{
    int n = 0;
    head = (NODE*)malloc(sizeof(NODE));
    NODE* pNew;
    pNew = (NODE*)malloc(sizeof(NODE));
    pNew->data = c;


    if (num == 0)
    {
        head = pNew;
        pNew->link = NULL;
        num++;
    }
    else
    {
        NODE* prev = head;

        for (int i = 0; i < num - 1; i++)
        {
            prev = prev->link;
        }

        if (num < index)
        {
            pNew->link = NULL;
            prev->link = pNew;
        }
        else
        {
            if (index == 0)
            {
                pNew->link = head->link;
                head = pNew;
            }
            else
            {
                pNew->link = prev->link;
                prev->link = pNew;
            }
        }

        /*if (num < index)
        {
            for (int i = 0; i < num; i++)
            {
                now = now->link;
            }
            now->link = pNew;
            pNew->link = NULL;
        }
        else if (index == 0 && num!=0)
        {
            now = pNew->link;
            head = pNew;
        }
        else if (index == 0 && num == 0)
        {
            pNew->link = NULL;
            now = pNew;
        }
        else
        {
            n = 0;
            for (int i = 0; i < num; i++)
            {
                now = now->link;
                n++;
            }
            int cnt = 0;
            NODE* pPrev = head;
            while (cnt != n - 1)
            {
                pPrev = pPrev->link;
                cnt++;
            }
            pPrev->link = pNew;
            pNew->link = now;
            }
        }*/
        num++;
    }
}


void DeleteNodeAt(int index)
{
    int n = 0;
    NODE* pPrev = head;
    NODE* pCur = (NODE*)malloc(sizeof(NODE));
    while (pPrev->link->link != NULL)
    {
        pPrev = pPrev->link;
        n++;
    }

    if (n + 1 < index)
    {
        // can fault
        pCur = pPrev->link;
        pPrev->link = pCur->link;
        free(pCur);// order
    }
    else if (index <= 0)
    {

    }
    else
    {
        n = 0;
        pPrev = head;
        while (n + 1 < index)
        {
            pPrev = pPrev->link;
            n++;
        }
        pPrev->link = pCur->link;
        free(pCur);
    }
}

void PrintList()
{
    NODE* now = head;

    while (now->link == NULL)
    {
        printf("%c", now->data);
        now = now->link;
    }

    free(head);
}