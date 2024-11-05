#include <stdio.h>

// Define a structure for student
struct Student {
    char name[50];
    int marks;
};

int main() {
    // Declare an array of 5 students
    struct Student students[5];
    struct Student highestScorer;
    
    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Initialize highest scorer with the first student
    highestScorer = students[0];

    // Find the student with the highest marks
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > highestScorer.marks) {
            highestScorer = students[i];
        }
    }

    // Print the highest scorer's details to the console
    printf("Highest Scorer:\n");
    printf("Name: %s\n", highestScorer.name);
    printf("Marks: %d\n", highestScorer.marks);

    // Write the highest scorer's details to a file
    FILE *filePointer = fopen("highest_scorer.txt", "w");
    if (filePointer == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fprintf(filePointer, "Highest Scorer:\n");
    fprintf(filePointer, "Name: %s\n", highestScorer.name);
    fprintf(filePointer, "Marks: %d\n", highestScorer.marks);
    
    fclose(filePointer);

    return 0;
}
