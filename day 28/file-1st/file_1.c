// wap in c to create and open a file
#include<stdio.h>
int main()
{
    FILE *fp; // FILE structure define
    fp=fopen("C:/Users/com/Desktop/C-pro. codes/day 28/file/f1.txt","w"); // file create and open 
    // w is for write

     




    fclose(fp);// file closed
    printf("File created succesfully!");

    return 0;
}