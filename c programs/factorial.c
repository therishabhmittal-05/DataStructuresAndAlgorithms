#include<stdio.h>
double factorial(double number)
{
    if (number==1||number==0)
    return 1;
    else 
    return number*factorial(number-1);
}

int main ()
{
    double num;
    printf("enter a number\n");
    scanf("%lf",&num);
    printf("Factorial of %.2lf  is %.2lf",num,factorial(num));
    return 0;
}