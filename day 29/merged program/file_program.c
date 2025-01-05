#include <stdio.h>
#include <stdlib.h>

// Function to copy content from one file to another
void copyFileContent(FILE *source, FILE *destination) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    FILE *fp1, *fp2, *fp3;

    // Open files
    fp1 = fopen("file-1.txt", "r");
    fp2 = fopen("file-2.txt", "r");
    fp3 = fopen("file-3.txt", "a"); // Use "w" to overwrite

    // Check if files opened successfully
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        perror("Error opening files");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        if (fp3) fclose(fp3);
        exit(1);
    }

    // Copy content from file-1 to file-3
    copyFileContent(fp1, fp3);

    // Copy content from file-2 to file-3
    copyFileContent(fp2, fp3);

    printf("Files successfully merged into file-3.txt.\n");

    // Close all files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
