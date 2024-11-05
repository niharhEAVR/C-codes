#include<stdio.h>
#include<string.h>
union student
{
    int rollno;
    char name[100];
    int age;
};
int main()
{   

    union student s1;
    printf("Enter the Roll No: ");
    scanf("%d",&s1.rollno);
    fflush(stdin);
    printf("Enter the Name: ");
    gets(s1.name);
    fflush(stdin);
    printf("Enter the age: ");
    scanf("%d",&s1.age);
    

    printf("The roll no is: %d\n",s1.rollno);
    printf("The name is: %s\n",s1.name);
    printf("The age is: %d\n",s1.age);

    

    return 0;
}