#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void rotate_left_once(int array[], int length)
{
    // store the first element in the array so we can put it on the end after
    int temp = array[0];

    // rotate elements from index 0 until the 2nd last index to the left 
    for (int i = 0; i < (length - 1); i++)
        array[i] = array[i + 1];

    // put the former first element of the array as the new last element
    array[length - 1] = temp;
}


// we just use the rotate_left_once function n times to perform different values of rotation:
void rotate_left(int *array, int length, int n)
{
    // apply the rotate_left_once function n times
    for (int i = 0; i < n; i++)
        rotate_left_once(array,length);
}


int main(int argc, char *argv[])
{
    int n, length;
    srand(time(NULL));

    printf("array length -> ");
    scanf("%i", &length);

    int (array[length]);

    for (int i = 0; i < length; i++) {
        array[i] = rand() % 100+1; 
    }

    for (int i = 0; i < length; i++) {
        printf("%3i ", array[i]); 
    }
    printf("\n");

    printf("n -> ");
    scanf("%i", &n);

    rotate_left(array, length, n);

    for (int i = 0; i < length; i++) {
        printf("%3i ", array[i]);
    }

    return EXIT_SUCCESS;
}
