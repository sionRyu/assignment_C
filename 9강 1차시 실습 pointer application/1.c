#include <stdio.h>

void printRange(char* str, int start, int end);

int main(void)
{
    char s[100] = { " " };
    int a, b;
    char* p = s;

    printf("Input string: ");
    scanf("%s", s);
    printf("Input start and end: ");
    scanf("%d %d", &a, &b);
    printRange(p, a, b);
}

void printRange(char* str, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
