#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void bubble_sort(int * array, int array_length) {
    int swap;
    for (int i = 0; i < array_length; i++) {
        for (int j = i+1; j < array_length; j++ ) {
            if (array[i] > array[j]) {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
}


int main(int argc, char *argv[])
{
    int usr_in;
    srand(time(NULL));  // set the seed for rand() as the current time to prevent deterministic behaviour

    printf("number -> ");
    scanf("%d", &usr_in);

    int array[usr_in];

    for (int i = 0; i < usr_in; i++){
        array[i] = rand() % 21;
    }

    bubble_sort(array, usr_in);

    for (int i = 0; i < usr_in; i++){
        printf("%i\n", array[i]);
    }


    return EXIT_SUCCESS;
}
