#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number range: ");
    scanf("%d",&num);
        for (int i =1; i <= num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}