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


int main(int argc, char *argv[])
{
    int usr_in;
    srand(time(NULL));

    printf("number -> ");
    scanf("%d", &usr_in);

    int array[usr_in];

    for (int i = 0; i < usr_in; i++){
        array[i] = rand() % 21;
    }

    selection_sort(array, usr_in);

    for (int i = 0; i < usr_in; i++){
        printf("%i\n", array[i]);
    }

    return EXIT_SUCCESS;
}
