#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int number;
    int result;

    printf("Type a number(1-100): ");
    scanf("%i", &number);

    if (number > 0 && number < 100)
    {
        for(int i=1; i <= 10; i++)
        {
            printf("%i * %i = %i\n", number, i, number*i);
        }
    }
    else
    {
        printf("Number is either to big or to small");
    }

    return EXIT_SUCCESS;
}
