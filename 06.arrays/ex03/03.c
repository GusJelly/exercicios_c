#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum_of_array(int array[], int size_of_array);
int media(int total, int number_of_elements);

int main(int argc, char *argv[])
{
    int user_array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Type a number -> ");
        scanf("%i", &user_array[i]);
    }
    printf("media -> %i", media(sum_of_array(user_array, 5), 5));

     return EXIT_SUCCESS;
}

int sum_of_array(int array[], int size_of_array)
{
    int result_of_sum = 0;
    for (int i = 0; i < size_of_array; i++)
    {
        result_of_sum += array[i];
    }
    return result_of_sum;
}

int media(int total, int number_of_elements)
{
    return total / number_of_elements;
}

