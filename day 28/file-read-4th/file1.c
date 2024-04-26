// wap in c to create and open a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp; // FILE structure define
    char ch;
    fp=fopen("file.txt","r"); // file create and open 
    // w is for write

    if(fp==NULL){
        perror("Problem");
        exit(1);
    }else{

    ch = fgetc(fp); // file read
    
    while(ch != EOF) //EOF = END OF FILE -> MACROS IN C
    {
        printf("%c",ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    }



    return 0;
}