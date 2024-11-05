#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declare a file pointer
    FILE *filePointer;
    char ch[100];
    // Open a file in write mode ("w")
    // If the file does not exist, it will be created
    filePointer = fopen("output.txt", "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        perror("Problem");
        exit (1);
    }

    // Write the string "hello File Handling" to the file
    printf("Enter the messege: ");
    gets(ch);
    fputs(ch,filePointer);

    // Close the file
    fclose(filePointer);

    // Inform the user that the operation was successful
    printf("Successfully written to the file.\n");

    return 0;
}
