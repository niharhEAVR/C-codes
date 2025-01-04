#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;
    int gussedNum = 9;
    while (1)
    {
        printf("guess the number: ");
        scanf("%d", &num);
        switch (num == gussedNum)
        {
        case 1:
            printf("You gussed correct\n");
            break;
            exit(1);
        default:
            printf("You gussed wrong\n");
            break;
        }
    }

    return 0;
}