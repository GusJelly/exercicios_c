#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));   // Inicialização. Só é chamado uma vez.
    int r = 1+rand()%100;      // Returns a pseudo-random integer between 0 and RAND_MAX.

    int userNumber;
    int counterTries=0;

    while(userNumber!=r){
        printf("\nnumber: ");
        scanf("%i", &userNumber);
        if(userNumber > r){
            printf("Your number is too high!\n");
        }
        else if (userNumber < r) {
            printf("Your number is too low!\n");
        }
        counterTries+=1;
    }
    printf("It took you %i tries!", counterTries);

    return EXIT_SUCCESS;
}
