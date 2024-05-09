// wap in c to create and append a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp; 
    char ch[100];
    fp=fopen("file.txt","a"); // file create and open 
    // a is for append

    printf("Enter the text:");
    gets(ch);
    fputs(ch,fp); // file input
    fclose(fp);// file closed
    
    printf("\nFile created succesfully!");
    

    return 0;
}