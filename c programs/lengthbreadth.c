#include <stdio.h>
int main()
{
float length,breadth;
printf("length(cm)=");
scanf("%f",&length);
printf("breadth(cm)=");
scanf("%f",&breadth);
float perimeter=2*(length+breadth);
printf("perimeter of rectangle is \n%f \n",perimeter);
float area=length*breadth;
printf("area of rectangle is \n%f ",area);
return 0;
}