// Write a program to create a Simple Calculator using a switch case.
#include <stdio.h>
int main()
{
    float n1, n2, r;
    char c;
    printf("Enter two numbers:\n");
    scanf("%f%f", &n1, &n2);
    printf("What operation do you want to perform:\n");
    printf("1.Addition\n2.Substraction\n3.Multliplication\n4.Division\n");
    printf("Enter the Serial numbers: ");
    scanf("%s", &c);
    switch (c)
    {
    case '1':
        r = n1 + n2;
        printf("The result is %.2f", r);
        break;
    case '2':
        r = n1 - n2;
        printf("The result is %.2f", r);
        break;
    case '3':
        r = n1 * n2;
        printf("The result is %.2f", r);
        break;
    case '4':
        if (n2 != 0)
        {
            r = n1 / n2;
            printf("The result is %.2f", r);
        }
        else
        {
            printf("The division cannot possible by Zero.");
        }
        break;
    default:
        printf("Invalid Operator!");
    }
    return 0;
}