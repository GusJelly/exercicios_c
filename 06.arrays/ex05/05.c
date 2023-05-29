#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int find_biggest_number_in_array(int array[], int length_of_array)
{
    int max = 0;
    for (int i = 0; i < length_of_array; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}

int find_smallest_number(int array[], int length_of_array)
{
    int min = find_biggest_number_in_array(array, length_of_array);

    for (int i = 0; i < length_of_array; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}


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
    printf("\n");

    printf("smallest -> %i\n", find_smallest_number(user_array,5));
    printf("biggest -> %i\n", find_biggest_number_in_array(user_array,5));

    return EXIT_SUCCESS;
}

