#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b);
void sort(int* a, int m);
void all_sort(int a[][100], int n, int m);
int binary_search(int* a, int* endPtr, int key, int** findPtr);
int all_binary_search(int a[][100], int n, int m, int key, int** findPtr);

int main(void)
{
    int n, m, k, checkKey, replace_1 = 0;
    int* replace_2 = &replace_1;
    int** findPtr = &replace_2;
    int arr_a[100][100] = { 0 };

    //findPtr = (int**)malloc(1 * sizeof(int));
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", (*(arr_a + j) + i));
        }
    }
    all_sort(arr_a, n, m);
    checkKey = all_binary_search(arr_a, n, m, k, findPtr);
    printf("%d\n", checkKey);
    if (checkKey == 1)
    {
        printf("%p\n", findPtr);
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int* a, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                swap(a + j, a + j + 1);
            }
        }
    }
}

void all_sort(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        sort((*(a)+i), m);
    }
}

int binary_search(int* a, int* endPtr, int key, int** findPtr)
{
    int* firstPtr;
    int* midPtr = NULL;
    int* lastPtr;

    firstPtr = a;
    lastPtr = endPtr;

    while (firstPtr <= lastPtr)
    {
        midPtr = firstPtr + (lastPtr - firstPtr) / 2;
        if (key > *midPtr)
        {
            firstPtr = midPtr + 1;
        }
        else if (key < *midPtr)
        {
            lastPtr = midPtr - 1;
        }
        else
        {
            firstPtr = lastPtr + 1;
        }
    }
    *findPtr = midPtr;
    return (key == *midPtr);
}

int all_binary_search(int a[][100], int n, int m, int key, int** findPtr)
{
    int i = 0;
    int check = 0;
    while (i < n && check != 1)
    {
        check = binary_search(((*a) + i), ((*a + 9) + i), key, findPtr);
        i++;
        if (check == 1)
        {
            return 1;
        }
    }
}