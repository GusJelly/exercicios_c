#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int num1, num2;
    printf("n1 -> ");
    scanf("%i", &num1);
    printf("n2 -> ");
    scanf("%i", &num2);

    while (num1 < num2) {
        num1 += 1;
        printf("\n%i\n", num1);
    }

    return EXIT_SUCCESS;
}
