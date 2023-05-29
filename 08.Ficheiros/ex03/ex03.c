#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void bubbleSort(char arr[][MAX_LENGTH], int n) {
    int i, j;
    char temp[MAX_LENGTH];
    int sorted = 0;

    for (i = 0; i < n - 1; i++) {
        sorted = 1; // Assume the array is sorted initially

        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
                sorted = 0; // Set sorted to 0 to indicate a swap occurred
            }
        }

        if (sorted) {
            break; // If no swaps occurred, the array is already sorted
        }
    }
}


int main(int argc, char *argv[])
{
    char strings[100][MAX_LENGTH];
    int numStrings = 0;
    char *input_file = argv[1];

    // Open the file for reading
    FILE *file = fopen(input_file, "r");
    if (file == NULL) {
        printf("Couldn't open the file.\n");
        return 1;
    }

    // Read strings from the file
    while (fgets(strings[numStrings], MAX_LENGTH, file) != NULL) {
        // Remove the newline character at the end
        strings[numStrings][strcspn(strings[numStrings], "\n")] = '\0';
        numStrings++;
    }

    // Close the file
    fclose(file);

    // Sort the strings
    bubbleSort(strings, numStrings);

    // Print the sorted strings
    printf("Sorted strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s  (%li)\n", strings[i], strlen(strings[i]));
    }

    return EXIT_SUCCESS;
}

