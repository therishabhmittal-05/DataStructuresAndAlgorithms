#include<stdio.h>
int  func (int array[]){//copy of arr[]={1,2,3,4}is made in array[]
    for (int i = 0; i < 4; i++)
    {
        printf("value at %d is %d\n",i,array[i]);
       
    }
    array[0]=23;

    return 0;
}
int main ()
{
    
    int arr[]={1,2,3,4};
    printf("value at index 0 is %d\n",arr[0]);
    func(arr);
    printf("value at index 0 is %d\n",arr[0]);
    return 0;
}