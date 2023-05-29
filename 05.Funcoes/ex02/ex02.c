#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numPrimo(int n);

int main(int argc, char *argv[])
{
    // - Dado: n inteiro.
    // - Se n≤1 então não é primo e terminamos imediatamente.
    // - Se n>1 tentamos para d=2,3,…,n/2:
    // - se d divide n terminamos (não é primo)
    // - caso contrário, continuamos a procurar
    // - Se chegamos ao final sem encontrar um divisor: concluímos que n é primo.

    int userNumber;
    printf("Type a number to check: ");
    scanf("%i", &userNumber);

    if (numPrimo(userNumber)){
        printf("The number is prime!");
    }
    else {
        printf("The number is not prime!");
    }

    return EXIT_SUCCESS;
}

int numPrimo(int n){
    int nDivisible = 1;
    int division = n % 2;

    if (n==2){
        return 1;
    }

    if (n <= 1){
        return 0;
    }
    else {
        for (int i = 0; i < n; i++){
            if(!division){
                return 0;
            }
            else {
                nDivisible++;
            }
        }
        return 1; 
    }
}

