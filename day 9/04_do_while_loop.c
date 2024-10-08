#include <stdio.h>
int main()
{
    int i = 5;
    do{
        printf("%d\n", i);
        i++;
    } while (i <= 4);


    // its prints first time then checks the conditions for next steps
    return 0;
}