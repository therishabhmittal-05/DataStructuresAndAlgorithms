#include<stdio.h>
int  func (int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("value at %d is %d\n",i,*(ptr+i));
       
    }
    

    return 0;
}
int main ()
{
    
    int arr[]={1,2,3,4};
   // printf("value at index 0 is %d\n",arr[0]);
    func(arr);
    //printf("value at index 0 is %d\n",arr[0]);
    return 0;
} 