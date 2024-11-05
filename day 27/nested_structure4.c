/*
	// Problem Statement:	
	TODO: Write a program to define a structure to store
        the details of an employee. The details include 
        employee id,name and date of joining.
		The date of joining should be stored in another
        structure which includes day, month and year.
        Display the details of the employee.
 */

#include <stdio.h>
#include <string.h>

struct date{
    int dd;
    int mm;
    int yy;
};

struct employee
{
    int empID;
    char empName[30];
    // nested structure
    struct date doj; // struct date of joining (d.o.j)
};

int main()
{

    struct employee e1;
    e1.empID = 101;
    strcpy(e1.empName, "Bijan Debnath");
    e1.doj.dd = 10;
    e1.doj.mm = 02;
    e1.doj.yy = 2023;

    struct employee e2;
    e2.empID = 102;
    strcpy(e2.empName, "Asit Chowdhry");
    e2.doj.dd = 21;
    e2.doj.mm = 02;
    e2.doj.yy = 2012;

    printf("The ID of the employee is: %d\n",e1.empID);
    printf("The Name of employee is: %s\n",e1.empName);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d \n\n",e1.doj.dd,e1.doj.mm,e1.doj.yy);

    printf("The ID of employee is: %d\n", e2.empID);
    printf("The Name of employee is: %s\n", e2.empName);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d ", e2.doj.dd, e2.doj.mm, e2.doj.yy);

    return 0;
}