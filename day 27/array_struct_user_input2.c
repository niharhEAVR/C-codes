/*
TODO: Write a program to store the information of 5
students in a structure. The information of each student
includes roll number and name. The program should 
display the information of all the students.
*/

#include<stdio.h>
#include<string.h>
struct student
{
    int rollNo;
    char name[30];
};
int main()
{
    // array of objects user input
    
    struct student st[10];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n\nEnter the Roll No of a student: \n");
        scanf("%d",&st[i].rollNo);
        fflush(stdin);
        printf("Enter the Name of a student: \n");
        //scanf("%[^\n]s",st[i].name);
        gets(st[i].name);
        fflush(stdin);
    }

    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("\nRoll No: %d, Name: %s", st[i].rollNo, st[i].name);
    }
    

    
    return 0;
}