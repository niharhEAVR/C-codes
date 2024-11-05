#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float root_part, denominator;
    float root1, root2;

    printf("Enter the three coefficient value:\n");
    scanf("%f%f%f", &a, &b, &c);

    // root part
    root_part = sqrt((b * b) - (4 * a * c));
    denominator = 2 * a;

    // condition

    if (a == 0)
    {
        printf("This is not a quadratic equation, this is linear equation\n");
    }
    else
    {
        // root part is negative or positive
        if (root_part > 0)
        {
            // formula
            root1 = (-b + root_part) / denominator;
            root2 = (-b - root_part) / denominator;
            printf("The root are real number\n");
            printf("The roots are %.2f and %.2f\n", root1, root2);
        }
        else if (root_part == 0)
        {
            // formula
            root1 = (-b + root_part) / denominator;
            root2 = (-b - root_part) / denominator;
            printf("The root are real number and root part is equal to zero\n");
            printf("The roots are %.2f and %.2f\n", root1, root2);
        }
        else
        {
            printf("The root are imaginary number\n");
        }
    }
    return 0;
}