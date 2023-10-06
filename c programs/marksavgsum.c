#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter marks of first subject\n");
scanf("%d",&a);
printf("Enter marks of second subject\n");
scanf("%d",&b);
printf("Enter marks of third subject\n");
scanf("%d",&c);
int sum=a+b+c;
printf("sum of marks is \n %d \n",sum);
float average=sum/3;
printf("Average of marks is %f",average);
return 0;
}