#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseArray(int array[]);

int main(int argc, char *argv[])
{
    int numberList[20] = {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (int i = 0; i < 20; i++)
        printf("%i ", numberList[i]);
 
    printf("\n");

    reverseArray(numberList);

    for (int i = 0; i < 20; i++)
        printf("%i ", numberList[i]);

    printf("\n");

    return EXIT_SUCCESS;
}

// This function reverses a given array:
void reverseArray(int array[]) {
    int reversedArray[20];
    int counter = 0;

    for (int i = 19; i >= 0; i--) {
        reversedArray[counter] = array[i];
        counter++;
    }
    for (int i = 0; i < 20; i++)
        array[i] = reversedArray[i];
}

