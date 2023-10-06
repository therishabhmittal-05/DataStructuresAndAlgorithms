#include <stdio.h>
int main()
{

    int nsp2 = 0;
    int nsp1 = 4;
    int nst1 = 1;
    int nsp3 = 4;
    int nst2 = 1;
    int nsp4 = 4;
    for (int l = 1; l <= 5; l++)
    {
        for (int m = 1; m <= nsp1; m++)
        {
            printf(" ");
        }
        nsp1--;
        for (int t = 1; t <= nst1; t++)
        {
            printf("*");
        }
        nst1 = nst1 + 2;
        for (int m = 1; m <= nsp4; m++)
        {
            printf(" ");
        }
        nsp4--;
        for (int k = 1; k <= nsp3; k++)
        {
            printf(" ");
        }
        nsp3--;
        for (int t = 1; t <= nst2; t++)
        {
            printf("*");
        }
        nst2 = nst2 + 2;

        printf("\n");
    }

    // ulta pyramid
    for (int i = 9; i >= 1; i--)
    {
        for (int k = 1; k <= nsp2; k++)
        {
            printf(" ");
        }
        nsp2++;
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}