#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void uppercase_string(char *str, int str_length)
{
    for (int i = 0;i < str_length; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int main(int argc, char *argv[])
{
    char user_string[100];
    printf("Give me a string: ");
    fgets(user_string, 100, stdin); 

    uppercase_string(user_string, 100);

    printf("%s", user_string);

    return EXIT_SUCCESS;
}

