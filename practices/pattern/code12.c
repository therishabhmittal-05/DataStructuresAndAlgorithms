// alphabet number triangle

#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
           int A = 65;
            char ch = (char)A;
            for (int j = 1; j <= i; j++)
            {
                printf("%c", ch);
                ch++;
            }
            printf("\n");
            
        }
        else
        {
             for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            printf("\n");
            
        }
        
    }
    return 0;
}