#include<stdio.h>
int main ()
{

    int arr[]={10,2,3,454,34};
    int *ptr=arr;
    
    
    printf("address of 0= %d\n",arr);
    printf("address of 0= %d\n",*ptr);
    printf("address of 0= %d\n",ptr);
    printf("value at 0= %d\n",arr[0]);
    printf("value at 3= %d\n",*(&arr[3]));
    printf("address of 2= %d\n",&arr[2]);
    printf("value at 2= %d\n",arr[2]);
    printf("address of 0= %d\n",&arr[0]);
    printf("address of 0= %d\n",&arr[0]);
    printf("address of 0= %d\n",&arr[0]);
    return 0;
}

