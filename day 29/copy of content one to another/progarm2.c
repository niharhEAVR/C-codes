// develop a C program to copy the content of 1 text file
// into another text file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *source, *destination;
char ch;
int main()
{
    source=fopen("f1.txt","r");

    if(source==NULL){
        perror("Problem");
        exit(1); // or return 1;
    }else{
        destination=fopen("f2.txt","w");
        if(destination==NULL){
            perror("Problem");
            return 1;
        }else{
            ch = fgetc(source);
            while(ch!=EOF){
                fputc(ch,destination);
                ch=fgetc(source);
            }
        fclose(destination);
        }
        fclose(source);
    }
    printf("Content copied succesfully");
    return 0;
}
