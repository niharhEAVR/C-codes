#include <stdio.h>
int main()
{
    float mark[10] = {45.6, 78.4, 65.9, 58.3, 82.1, 44.5, 61.8, 53.6, 49.2, 37.7};
    int i;
    float sum = 0, average, highest = 0;
    for (i = 0; i < 10; i++)
    {
        sum += mark[i];
        if (mark[i] > highest){
            highest = mark[i];
        }
    }
    average = sum / 10.0;
    printf("The Average Mark is %.2f \n", average);
    printf("The Highest Mark is %.2f \n", highest);
    return 0;
}