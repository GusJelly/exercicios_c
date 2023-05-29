#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int user_array[10];

    for (int i = 0; i < 10; i++)
    {
        int a;
        printf("Type a number -> ");
        scanf("%i", &a);
        user_array[i] = a;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%i\n", user_array[i]);
        }
    }

    return EXIT_SUCCESS;
}

