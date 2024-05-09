// wap in c to create and open a file
#include<stdio.h>
int main()
{
    FILE *fp; // FILE structure define
    fp=fopen("f1.txt","w"); // file create and open
    // w is for write

     
    fp=fopen("C:/Users/com/Desktop/C codes/day 28/file-1st/f2.txt","w");
    // This address is showing that you can store the created file anywhere in  your computer.
    // All you have to do is collect the address as shown in the image (address.png)
    // Then exchange the all backslash with forward slash (\ => /)
    // And then write the file name with reference (f2.txt)




    fclose(fp);// file closed
    printf("File created succesfully!");

    return 0;
}