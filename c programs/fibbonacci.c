#include<stdio.h>
int fibonacci(int n)
{
    if (n==1||n==2)
    return n-1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main ()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);

    printf("fibonacci series of number enter is \n %d",fibonacci(num));
    return 0;
}