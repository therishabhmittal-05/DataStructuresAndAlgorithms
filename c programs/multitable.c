#include <stdio.h>
int main()
{
    int num, i;
    printf("enter a number:");
    scanf("%d", &num);
    printf("multiplication table of %d is :\n", num);
    for (i = 1; i <= 20; i += 1)
    {
        printf("%dX%d=%d\n", num, i, num * i);
    }
    return 0;
}