// star traingle ulta
#include <stdio.h>
int main()
{
    int n;
    int nsp=0;
    
    printf("enter no. of rows:");
    scanf("%d",&n);
    for (int i = n; i >= 0; i-=2)
    {
        for (int k = 0; k < nsp; k++)
        {
            printf(" ");
        }
        nsp++;
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}