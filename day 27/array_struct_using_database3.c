/*
TODO: Write a program to store the information of 5
students in a structure. The information of each student
includes roll number and name. The program should 
display the information of all the students.
*/
#include<stdio.h>
#include<string.h>
struct student{
    
    int rollNo;
    char name[30];
};
int main()
{
    // data base
    struct student st6[3] = {
        {10,"koushik patra"}, //0th index of the array
        {20, "soumyajit khan"}, //1th index
        {30, "Biswajit Naskar"} //2nd index
    };

    printf("\nRoll No: %d, Name: %s\n\n", st6[1].rollNo, st6[1].name); // it is used for specific person and 1 is the index value

    for(int i=0;i<3;i++)
    {
        printf("\nRoll No: %d, Name: %s", st6[i].rollNo, st6[i].name);
    }

    return 0;
}