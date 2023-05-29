#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int number;
    int result;
    int remainder;

    printf("Insira um inteiro (>0)-> ");
    scanf("%i", &number);
    remainder = number%2;
    
    for (int i=0; i < number; i++) {
        if(i%2 == 0){
           printf("%i\n", i);
        }
    }

    return EXIT_SUCCESS;
}

