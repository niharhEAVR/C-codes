// Write a program to find the roots of a quadraƟc equaƟon using a switch case.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float rt;     // Root_part
    float dm;     // Denominator
    float r1, r2; // roots

    printf("Enter the values of a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);

    rt = sqrt((b * b) - (4 * a * c));
    dm = 2 * a;

    switch (a == 0)
    {
    case 1:
        printf("This is not a quadratic equation, this is a linear equation.\n");
        break;

    case 0:
        switch (rt > 0)
        {
        case 1:
            r1 = (-b + rt) / dm;
            r2 = (-b - rt) / dm;
            printf("The root are real number\n");
            printf("The roots parts are %.2f and %.2f.", r1, r2);
            break;

        case 0:
            switch (rt == 0)
            {
            case 1:
                r1 = (-b + rt) / dm;
                r2 = (-b - rt) / dm;
                printf("The root are real number and root part is equal to zero\n");
                printf("The roots parts are %.2f and %.2f.", r1, r2);
                break;

            default:
                printf("The roots parts are imaginary numbers.");
            }
        }
    }
    return 0;
}