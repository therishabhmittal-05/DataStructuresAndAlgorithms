#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a=n/2 + 1;
        for (int j = 1; j<= n; j++)
       
        {
             
            if (i == a || j == a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}