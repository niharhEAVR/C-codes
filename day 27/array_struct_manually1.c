/*
TODO: Write a program to store the information of 5
students in a structure. The information of each
student includes roll number and name.
The program should display the information of all the students.
*/
#include<stdio.h>
#include<string.h>
struct student{

    int rollNo;
    char name[100];
};
int main(){

    struct student st1 = {10, "Nihar debnath"};
    printf("\nRoll No:%d,Name:%s", st1.rollNo, st1.name);

    struct student st2 = {20, "Snehal das"};
    printf("\nRoll No:%d,Name:%s", st2.rollNo, st2.name);

    struct student st3 = {30, "Suraj maharaj"};
    printf("\nRoll No:%d,Name:%s", st3.rollNo, st3.name);

    struct student st4 = {40, "Rishika Acharjee"};
    printf("\nRoll No:%d,Name:%s", st4.rollNo, st4.name);

    struct student st5 = {50, "Atul sinha"};
    printf("\nRoll No:%d,Name:%s", st5.rollNo, st5.name);
}
