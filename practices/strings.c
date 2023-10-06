#include<stdio.h>
void printstr ( char name[52]){
    printf("string entered is:%s",name);
    
}
int main ()

{
    char name[52];
    printf("enter the string:\n");
    gets(name);
    printf("enter string is :%s\n",name);
    printstr(name);

    char id[] = "rishabh";
    printf("\n%s",id);
    return 0;
}