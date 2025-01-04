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


// switch case only takes int and char values, no string or float
//  always use the default at very last of the switch case statement