#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 100
#define ALPHABET_LENGTH 26


char check_if_alphabet(char letter)
{
    if (isalpha(letter))
        return letter;
    else return 0;
}


void count_letters(char *str)
{
    int letter_count[ALPHABET_LENGTH] = {0};
    int index;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i])) {
            index = tolower(str[i]) - 'a';
            letter_count[index]++;
        }
    }
    for (int i = 0; i < ALPHABET_LENGTH; i++) {
        if (letter_count[i] > 0) {
            printf("%c -> %i\n", i + 'a' /*<-letter ASCII value*/, letter_count[i]);
        }
    }
}


int main(int argc, char *argv[])
{
    char user_str[MAX_STRING_LENGTH];
    printf("type -> ");
    fgets(user_str, MAX_STRING_LENGTH, stdin);

    count_letters(user_str);

    return EXIT_SUCCESS;
}

