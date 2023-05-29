#include <stdio.h>
#include <ctype.h>

int vowelChecker(char vowels[], char userInput);

int main(int argc, char const *argv[])
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char letter;
    printf("Insert a letter: ");
    scanf("%c", &letter);

    if (vowelChecker(vowels, letter) == 1)
    {
        printf("\n The letter is a vowel!\n");
    }
    else
    {
        printf("\nThe letter is not a vowel!\n");
    }

    return 0;
}

int vowelChecker(char vowels[], char userInput)
{
    for (int i = 0; i < 5; i++)
    {
        if (tolower(vowels[i]) == userInput)
        {
            return 1;
        }
    }
    return 0;
}
