#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int userInput;
    do{
        printf("\nChoose an option: \n1 -> Option 1;\n2 -> Option 2;\n0 -> Exit;\n  -> ");
        scanf("%i", &userInput);
        if (userInput == 1)
            printf("\noption 1 was chosen!\n");
        else if (userInput == 2)
            printf("\noption 2 was chosen!\n");
        else if (!userInput)
            break; 

    }while (userInput != 0);

    return EXIT_SUCCESS;
}
