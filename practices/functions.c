#include <stdio.h>

void printstar();
int main()
{

    printstar();
    printstar();
    return 0;
}

void printstar()
{
    int i, n;
    printf("enter a number\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("*");
        printf("\n");
    }
}