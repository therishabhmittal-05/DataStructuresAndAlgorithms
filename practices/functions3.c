#include<stdio.h>
int typenumber()
{
    int i;
    printf("enter a number ");
    scanf("%d",&i);
    return i;
}
int main ()
{
    
    printf("no. entered is %d",typenumber());
    return 0;
}
//in c value return by typenumber() function is stored
//now typenumber() is kind of working like variable having value stored= return i