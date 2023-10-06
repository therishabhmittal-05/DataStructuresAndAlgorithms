#include<stdio.h>
struct student {
    char name[50];
    
    char id;
    int class;
};
struct student s[3];
//struct student s1,s2,s3;
int main ()
{
//     printf("enter the details of the students:\n");
//     scanf("%s %c %d",&s1.name,&s1.id,&s1.class);
//     printf("enter the details of the students:\n");
//      scanf("%s %c %d",&s2.name,&s2.id,&s2.class);
//      printf("enter the details of the students:\n");
//       scanf("%s %c %d",&s3.name,&s3.id,&s3.class);
// printf("here are the details entered:%s %c %d\n",s1.name,s1.id,s1.class);
// printf("here are the details entered:%s %c %d\n",s2.name,s2.id,s2.class);
// printf("here are the details entered:%s %c %d\n",s3.name,s3.id,s3.class);
for (int i = 0; i < 3; i++)
{
    printf("enter the details of the student %d:\n",i+1);
    scanf("%s %c %d",&s[i].name,&s[i].id,&s[i].class);
    printf("\n");

}


for (int i = 0; i < 3; i++)
{
    printf("deatils enterd for student %d: %s %c %d",i+1,s[i].name,s[i].id,s[i].class);
    printf("\n");
}


    return 0;
}