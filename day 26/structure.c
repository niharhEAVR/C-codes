// WAP TO DEFINE A STRUCTURE TO STORE FOLLOWING INFORMATION OF A STUDENT
/*
    (1)STUDENT ROLL NO
    (2)STUDENT NAME
*/
#include <stdio.h>
#include<string.h>
// structure define - creating a template of structure
struct student
{
    int rollno;
    char name[100];
    float salary;
};

int main()
{   
    // grouping method is the easy method
    
    struct student s1 = {101,"Nihar",3000}; // this should match with structure sequence
    struct student s2 = {102,"flutone",6000};
    

    // by using ' . ' or member operator
    
    struct student s3;
    s3.rollno = 103;
    s3.salary = 17000;
    strcpy(s3.name,"hEAVR"); // from string.h header file
    

    //how to access the value inside in the member
    
    printf("1st Student ID: %d\n",s1.rollno);
    printf("Student Name: %s\n",s1.name);
    printf("The salary of that students:%.f\n",s1.salary);
    printf("\n");
    printf("2nd Student ID: %d\n",s2.rollno);
    printf("Student Name: %s\n",s2.name);
    printf("The salary of that students:%.f\n",s2.salary);
    printf("\n");
    printf("3rd Student ID: %d\n",s3.rollno);
    printf("Student Name: %s\n",s3.name);
    printf("The salary of that students:%.f\n",s3.salary);
    

    return 0;
}