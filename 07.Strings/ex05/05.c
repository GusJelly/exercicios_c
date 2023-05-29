#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 100
#define ALPHABET_LENGTH 26

int contains(char *str, char letter) {
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if (str[i] == letter) {
                return 1;
            }
        }
    }
    return 0;
}


int count(char *str, char character) {
    int counter = 0;
    if (contains(str, character)) {
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == character) {
                counter++;
            }
        }
        return counter;
    }
    return 0;
}


char* ptr_get_letters_array;
void get_letters(char *str) {
    ptr_get_letters_array = malloc(sizeof(str));

    for (int i = 0; str[i] != '\0'; i++) {
        ptr_get_letters_array[i] = str[i];
    }

    for (int i = 0; i < strlen(ptr_get_letters_array); i++) {
        for (int j = i+1; strlen(ptr_get_letters_array); j++) {
            if (ptr_get_letters_array[i] == ptr_get_letters_array[j])
                ptr_get_letters_array[j] = 0;
        }
    }
}


void sort(int *array) {
    int swap;

    for (int i = 0; i < ALPHABET_LENGTH; i++) {
        for (int j = i + 1; j < ALPHABET_LENGTH; j++) {
            if (array[i] < array[j]) {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
}


/*
void count_most_occurring_letters(char *str) {
    int letter_count[ALPHABET_LENGTH] = {0};
    int index;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            index = tolower(str[i]) - 'a';
            letter_count[index]++;
        }
    }

    sort_letters(letter_count);

    for (int i = 0; i < ALPHABET_LENGTH; i++) {
        if (letter_count[i] > 0) {
           printf("%c -> %i\n", i + 'a', letter_count[i]);
        }
    }
}
*/


int main(int argc, char *argv[])
{
    int count[26] = {0};
    char * letters = ptr_get_letters_array;

    char user_str[MAX_STRING_LENGTH];
    printf("type -> ");
    fgets(user_str, MAX_STRING_LENGTH, stdin);

    for (int i = 0; strlen(user_str); i++) {
        if (contains(user_str, letters[i])) {
            printf("%c\n", letters[i]);
        }
    }


    return EXIT_SUCCESS;
}

