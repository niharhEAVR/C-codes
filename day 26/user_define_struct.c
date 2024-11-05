// WAP TO DEFINE A STRUCTURE TO STORE FOLLOWING INFORMATION OF A STUDENT
/*
    (1)STUDENT ROLL NO
    (2)STUDENT NAME
    (2)STUDENT AGE
*/
#include <stdio.h>
#include<string.h>
// structure define - creating a template of structure
struct student
{
    int rollno;
    char name[100];
    int age;
}s1;

int main()
{   

    //user input
    // gets() will give error for integers values
    // struct student s1;
    printf("Enter the Roll No: ");
    scanf("%d",&s1.rollno);
    fflush(stdin); // this using for BUFFER
    printf("Enter the Name: ");
    //scanf("%[^\n]s",&s1.name);
    gets(s1.name);
    fflush(stdin);
    printf("Enter the age: ");
    scanf("%d",&s1.age);
    

    printf("\nThe roll no is: %d\n",s1.rollno);
    printf("The name is: %s\n",s1.name);
    printf("The age is: %d\n",s1.age);

    return 0;
}