#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50];
    char s2[50];

    printf("enter a string:\n");
    gets(s1);
    printf("Reverse of s1 is: %s\n", strrev(s1));
    strcpy(s2, strrev(s1));
    printf("%d\n", strcmp(s1, strrev(s1)));
    if (strcmp(s1, strrev(s1)) == 0)
    {
        printf("string is palindrome");
    }
    else
        printf("not a pallendrome");
    return 0;
}