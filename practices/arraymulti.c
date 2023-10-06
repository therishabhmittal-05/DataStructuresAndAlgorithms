#include <stdio.h>
int main()
{
    int A[3][3];
    int B[3][3];
    int result[3][3];
    int sum = 0;
    printf("enter the value for matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A%d%d:", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", A[i][j]);
        }

        printf("\n");
    }

    printf("enter the value for matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("B%d%d:", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", B[i][j]);
        }

        printf("\n");
    }
    printf("result\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            result[i][j] = sum;
            sum = 0;
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}