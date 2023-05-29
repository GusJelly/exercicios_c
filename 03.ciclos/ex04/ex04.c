#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int number;
    int repeat = 1;
    char answer;

    while (repeat==1) {
        printf("number -> ");
        scanf("%i", &number);

        for(int i=number-1; i > 0; i--){
            number = number*i;
            printf("\n%i\n", number);
        }

        printf("another number? (y/n) ");
        scanf("%c", &answer);

        if(answer == 'n'){
            repeat = 0;
        }
        else{
            repeat = 1;
        }
    }

    return EXIT_SUCCESS;
}
