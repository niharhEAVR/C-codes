// WAP TO DEFINE A STRUCTURE TO STORE FOLLOWING INFORMATION OF A STUDENT
/*
    (1)STUDENT ROLL NO
    (2)STUDENT NAME
    (2)STUDENT SCHOLARSHIP
*/
#include <stdio.h>
#include<string.h>
// structure define - creating a template of structure
struct student
{
    int rollno;
    char name[100];
    char department[50];
    float scholarship;
};

int main()
{   
    // grouping method is the easy method
    
    struct student s1 = {101,"Nihar Debnath","B.C.A",10000}; // this should match with structure sequence
    struct student s2 = {102,"Subham Nandi","B.Sc",18000};
    

    // by using ' . ' or member operator
    
    struct student s3;
    s3.rollno = 103;
    strcpy(s3.name,"Sayan Pramanick"); // from string.h header file
    strcpy(s3.department,"B.A"); // from string.h header file
    s3.scholarship = 12000;
    

    //how to access the value inside in the member
    
    printf("1st Student Rollno: %d\n",s1.rollno);
    printf("Student Name: %s\n",s1.name);
    printf("Student Department: %s\n",s1.department);
    printf("The scholarship of that students:%.f\n",s1.scholarship);
    printf("\n");
    printf("2nd Student Rollno: %d\n",s2.rollno);
    printf("Student Name: %s\n",s2.name);
    printf("Student Department: %s\n",s2.department);
    printf("The scholarship of that students:%.f\n",s2.scholarship);
    printf("\n");
    printf("3rd Student Rollno: %d\n",s3.rollno);
    printf("Student Name: %s\n",s3.name);
    printf("Student Department: %s\n",s3.department);
    printf("The scholarship of that students:%.f\n",s3.scholarship);
    

    return 0;
}