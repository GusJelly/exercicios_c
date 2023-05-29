#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void selection_sort(int *array, int array_length){
    for (int i = 0; i < array_length - 1; i++){
        int min_index = i;

        // Find the minimum element in the unsorted portion of the array
        for (int j = i + 1; j < array_length; j++){
            if (array[j] < array[min_index]){
                min_index = j;
            }
        }

        // Swap the minimum element with the current element
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}


void is_unique(int *uniqueArr, int *arr, int size) {
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        // Compare the current element with previous elements
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Found a duplicate
                break;
            }
        }

        // If the element is unique, add it to the new array
        if (isUnique) {
            uniqueArr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("Unique numbers: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%i\n", uniqueArr[i]);
    }
}


int main(int argc, char *argv[])
{
    int array_size;
    srand(time(NULL));

    printf("number -> ");
    scanf("%i", &array_size);
    int array[array_size];
    int array_unique_numbers[array_size];

    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % 10+1;
    }

    selection_sort(array, array_size);

    printf("Sorted Array:\n");
    for (int i = 0; i < array_size; i++)
        printf("%2i\n", array[i]);

    is_unique(array_unique_numbers, array, array_size);

    return EXIT_SUCCESS;
}
