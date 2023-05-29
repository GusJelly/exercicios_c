#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int number;

    for (int i = 0; i < 100; i++)
    {
        if (i % 3 && i % 5)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3)
        {
            printf("Fizz\n");
        }
        else if (i % 5)
        {
            printf("Buzz");
        }
        else
            printf("%i\n", i);
    }
    return EXIT_SUCCESS;
}
