#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("enter a number:");
    scanf("%d", &n);
    if (n == 0)

    {
        printf("factorial:1");
    }
    else if (n < 0)
    {
        printf("error");
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact = fact * i;
        }
        printf("factorial:%d", fact);
    }
    return 0;
}