#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 1000

void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {  // apparently you can use multiple expression in your for loops!
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(int argc, char *argv[])
{
    char user_str[STR_LENGTH];
    printf("A string -> ");
    fgets(user_str, STR_LENGTH, stdin);

    reverseString(user_str);

    printf("-> %s", user_str);

    return EXIT_SUCCESS;
}

