#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    // Declare a file pointer
    FILE *filePointer;
    char ch;

    // Open a file in read mode ("r")
    filePointer = fopen("output.txt", "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        perror("problem");
        exit (1);
    }

    while(ch!= EOF){
        printf("%c",ch);
        ch = fgetc(filePointer);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
