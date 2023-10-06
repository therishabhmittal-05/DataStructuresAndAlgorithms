// odd triangle ulta
#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of rows:");
    scanf("%d", &n);
    int nst=n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)

        {

            printf("%d", a);
            a = a + 2;
        }
        nst--;
        printf("\n");
    }

    return 0;
}