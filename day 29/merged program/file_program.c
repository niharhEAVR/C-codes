// develop a C program to merge the content of 2 texts
// and store into third text file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *fp1, *fp2, *fp3;
char ch;
int main()
{
    fp1=fopen("file-1.txt","r");
    fp2=fopen("file-2.txt","r");
    fp3=fopen("file-3.txt","a");

    if(fp1==NULL||fp2==NULL){
        perror("Problem");
        exit(1); // or return 1;
    }else{
        // file 1
        ch=fgetc(fp1);
        while(ch!=EOF){
            fputc(ch,fp3);
            ch=fgetc(fp1);
        }
        // file 2
        ch=fgetc(fp2);
        while(ch!=EOF){
            fputc(ch,fp3);
            ch=fgetc(fp2);
        }
        printf("File succesfully merged. \n");
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    }
    return 0;
}
