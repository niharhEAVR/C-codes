// WAP in C it takes days as a input and determine numbers of years, months, weeks and rest days
#include <stdio.h>
#define y 365
#define m 30
#define w 7
int main()
{
    long int days, year, month, week, rd;
    printf("Enter the numbers of days:");
    scanf("%ld", &days);
    year = (days / y);
    month = ((days % y) / m);
    week = (((days % y) % m) / w);
    rd = (((days % y) % m) % w);
    printf("%ld days is equivalent to:\n%ld year\n%ld months\n%ld weeks\n%ld days",days,year,month,week,rd);
    return 0;
}