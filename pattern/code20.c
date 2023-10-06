#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of rows:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            printf(" ");
        }
        int A=65;
        for (int j = 1; j <= i; j++)
        {
            printf("%c",(char)A);
            A++;
        }
        printf("\n");
    }

    return 0;
} 


