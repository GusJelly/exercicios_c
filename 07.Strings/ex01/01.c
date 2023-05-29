#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH_STRING 100

void replace_character(char *str, char replaced, char replacer, int string_size)
{
    for (int i = 0; i < string_size; i++)
    {
        if (str[i] == replaced)
        {
            str[i] = replacer;
        }
    }
}

int main(int argc, char *argv[])
{
    char user_string[MAX_LENGTH_STRING];
    char first_replacer[3], second_replacer[3];

    printf("Insert a string:\n");
    fgets(user_string, MAX_LENGTH_STRING, stdin);

    printf("to replace -> ");
    fgets(first_replacer, 3, stdin);

    printf("to replace with -> ");
    fgets(second_replacer, 3, stdin);

    replace_character(user_string, first_replacer[0], second_replacer[0], MAX_LENGTH_STRING);
    printf("%s", user_string);

    return EXIT_SUCCESS;
}

