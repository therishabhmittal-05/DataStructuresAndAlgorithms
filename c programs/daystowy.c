#include<stdio.h>
int main()
{
    int days;
    float years, weeks ;
    printf("enter no. of days \n ");
    scanf("%d",&days);
    years= days/365.0;
    weeks= days/7.0;
    printf("No. of years in %d days is %.2f\n",days,years);
    printf("No. of weeks in %d days is %.2f",days,weeks);
    return 0;
}