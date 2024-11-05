#include <stdio.h>
int main()
{
    int a = 10;
    switch (a)
    {
    case 20:
        printf("Hii\n");
        break;
    default:
        printf("Bye\n");
        break;
    case 11:
        printf("Hello\n");
        break;
    }
    return 0;
}



//  always use the default at very last of the switch case statement