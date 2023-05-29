#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int array[10];
    int minimum, swap, position;

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 20;
        printf("%i ", array[i]);
    }

    // selection sort:
    for (int i = 0; i < 10; i++)
    {
        minimum = array[i];
        for (int j = i + 1; j < 10; j++)
        {
            if (array[j] < minimum){
                minimum = array[j];
                position = j;
            }
        }
        swap = array[i];
        array[i] = minimum;
        array[position] = swap;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", array[i]);
    }
    printf("\n");


    return EXIT_SUCCESS;
}
