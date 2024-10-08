//Read 5 students marks, calculate total and average 
#include <stdio.h>
int main()
{
    int marks[5];
    int sum=0,avg=0;
    printf("Enter the Marks:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < 5; i++) //i=0 1
    {
       sum += marks[i]; // 0+50=50 50+45=95
    }

    avg = sum/5;
    printf("The total marks is :%d\n",sum);
    printf("The average marks is :%d",avg);
    
    return 0;
}