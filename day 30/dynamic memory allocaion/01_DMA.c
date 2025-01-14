#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers; // Pointer for dynamic memory
    int count, i;

    // Step 1: Use malloc to allocate memory for 5 integers
    printf("Using malloc to allocate memory for 5 integers.\n");
    numbers = (int *)malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (numbers == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize and print the allocated memory
    printf("Memory initialized with malloc (values may be garbage):\n");
    for (i = 0; i < 5; i++)
    {
        numbers[i] = i + 3; // Assign values (1 to 5)
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Step 2: Use calloc to allocate memory for 5 integers
    printf("\nUsing calloc to allocate memory for 5 integers.\n");
    int *numbers_calloc = (int *)calloc(5, sizeof(int));

    // Check if memory allocation was successful
    if (numbers_calloc == NULL)
    {
        printf("Memory allocation failed!\n");
        free(numbers); // Free previously allocated memory
        return 1;
    }

    // Print the allocated memory (initialized to 0 by calloc)
    printf("Memory initialized with calloc (all values are 0):\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers_calloc[i]);
    }
    printf("\n");

    // Step 3: Use realloc to resize the malloc memory to hold 10 integers
    printf("\nUsing realloc to resize malloc memory to 10 integers.\n");
    numbers = (int *)realloc(numbers, 10 * sizeof(int));

    // Check if memory reallocation was successful
    if (numbers == NULL)
    {
        printf("Memory reallocation failed!\n");
        free(numbers_calloc); // Free previously allocated memory
        return 1;
    }

    // Initialize the new memory and print all 10 values
    // for (i = 5; i < 10; i++)
    // {
    //     numbers[i] = i + 1; // Assign values (6 to 10)
    // }
    printf("Memory after realloc (10 values):\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Step 4: Free all allocated memory
    printf("\nFreeing all allocated memory.\n");
    free(numbers);
    free(numbers_calloc);

    printf("Memory has been freed successfully.\n");

    return 0;
}
