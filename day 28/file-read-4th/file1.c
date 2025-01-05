#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "r"); // file create and open
    // r is for read

    if (fp == NULL)
    {
        perror("Problem");
        exit(1);
    }
    else
    {

        while (ch != EOF) // EOF = END OF FILE -> MACROS IN C
        {
            printf("%c", ch);
            ch = fgetc(fp);
        }

        fclose(fp);
    }

    return 0;
}