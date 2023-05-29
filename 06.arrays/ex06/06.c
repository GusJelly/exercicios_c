#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int array1[2][2], array2[2][2], result[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" -> ");
            int number = scanf("%d", &number);
            array1[i][j] = number;
            array2[i][j] = number;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", result[i][j]);
        }
    }

    return EXIT_SUCCESS;
}

