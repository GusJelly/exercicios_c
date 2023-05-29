#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int twoDimensional[5][5] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%i ", j);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
