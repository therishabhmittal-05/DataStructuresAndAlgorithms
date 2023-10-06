#include <stdio.h>
int add (int a, int b);

int main()
{
    int a = 2, b = 3, sum;
    sum = add(a, b);
    printf("sum is %d\n", sum);
    
    
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
