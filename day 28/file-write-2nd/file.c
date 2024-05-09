// wap in c to create and Write a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp; 
    char ch[100];
    fp=fopen("file.txt","w"); // file create and open 
    // w is for write

    printf("Enter the text:");
    gets(ch);
    fputs(ch,fp); // file input
    fclose(fp);// file closed
    
    printf("\nFile created succesfully!");
    

    return 0;
}