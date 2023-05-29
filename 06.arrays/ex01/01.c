#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseArray(int array[]);

int main(int argc, char *argv[])
{
    int user_array[5];

    for (int i = 0; i < 5; i++)
    {
        int a;
        printf("Type a number -> ");
        scanf("%i", &a);
        user_array[i] = a;
    }

    reverseArray(user_array);

    for (int i = 0; i < 5; i++)
    {
        printf("%i, ", user_array[i]);
    }

    return EXIT_SUCCESS;
}

// This function reverses a given array:
void reverseArray(int array[]) {
    int reversedArray[5];  // the size of array needs to be adjusted depending on the expected size of the input
    int counter = 0;

    for (int i = 4; i >= 0; i--) { // the number for this for loop needs to be adjusted depending on the size of the expected
                                   // array
        reversedArray[counter] = array[i];
        counter++;
    }
    for (int i = 0; i < 5; i++)
        array[i] = reversedArray[i];
}

