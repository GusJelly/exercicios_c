#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int numberRows;
    printf("How many rows? -> ");
    scanf("%i", &numberRows);
    for (int i = 0; i < numberRows; i++){
        for (int j = 0; j < i+1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
