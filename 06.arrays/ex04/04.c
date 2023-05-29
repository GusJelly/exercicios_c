#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int contains(int a, int array[])
{
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == a)
        {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int user_guess;
    int number_list[10];

    for (int i = 0; i < 10; i++)
    {
       number_list[i] = rand() % 100; 
       printf("%i ", number_list[i]);
    }

    while (1)
    {
        printf("Type a number -> ");
        scanf("%i", &user_guess);
        if (contains(user_guess, number_list))
        {
            printf("You won!");
            break;
        }
    }

    return EXIT_SUCCESS;
}


