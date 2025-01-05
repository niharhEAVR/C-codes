#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fp;    // globally created for use anywhere
char choice; // globally created for use anywhere
char ch;     // globally created for use anywhere

char mainLogic(char choice)
{
    switch (choice)
    {
    case 'c':
        ch = fgetc(fp);
        printf("The Character Read is: %c\n", ch);
        break;
    case 'a':
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(fp);
        }
        break;
    default:
        printf("Invalid Keyborad Input!!!!!");
    }
}

int main()
{
    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("File does not exist");
        exit(1);
    }
    else
    {
        printf("Enter 'c' to read only first character & enter 'a' to read all the information store to a file: ");
        scanf("%c", &choice);
        mainLogic(choice); // function called
    }
    fclose(fp);

    return 0;
}