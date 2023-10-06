#include <stdio.h>

int main()
{
    float a, b, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("Enter an operator: ");
    scanf(" %c", &operator);

    if (operator== '+')
    {
        result = a + b;
    }
    else if (operator== '-')
    {
        result = a - b;
    }
    else if (operator== '*')
    {
        result = a * b;
    }
    else if (operator== '/')
    {
        result = a / b;
    }

    printf("Result = %f", result);

    return 0;
}
