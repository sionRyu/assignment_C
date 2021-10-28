#include <stdio.h>

void addition(char op, void* num1, void* num2);

int main(void)
{
    char op;
    void* num1Void;
    void* num2Void;
    printf("Input operator: ");
    scanf_s("%c", &op);


    if (op == 'i')
    {
        printf("You choose <integer> type.\n\n");
    }
    else if (op == 'f')
    {
        printf("You choose <float> type.\n\n");
    }
    printf("Input numbers: ");
    scanf_s("%p %p", &num1Void, &num2Void);
    addition(op, num1Void, num2Void);
}

void addition(char op, void* num1, void* num2)
{
    if (op == 'i')
    {
        long long int* n1;
        long long int* n2;
        long long int result;
        n1 = (long long int*)num1;
        n2 = (long long int*)num2;
        result = *n1 + *n2;
        printf("\nResult: %lld\n", result);
    }
    else if (op == 'f')
    {
        double* n1;
        double* n2;
        double result;
        n1 = (double*)num1;
        n2 = (double*)num2;
        result = *n1 + *n2;
        printf("\nResult: %lf\n", result);
    }
}