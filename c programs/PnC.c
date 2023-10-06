#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n, r;
    printf("enter n:");
    scanf("%d", &n);
    printf("enter r:");
    scanf("%d", &r);
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    int nPr = factorial(n) / factorial(r);
    printf("nCr: %d\n", nCr);
    printf("nPr: %d", nPr);

    return 0;
}