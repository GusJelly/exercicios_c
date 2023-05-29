#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTodosPrimos(int a, int b);
int numPrimo(int n);

int main(int argc, char *argv[])
{
    int n1, n2;

    printf("Type a number: ");
    scanf("%i", &n1);
    printf("Type another number: ");
    scanf("%i", &n2);

    printTodosPrimos(n1, n2);

    return EXIT_SUCCESS;
}


void printTodosPrimos(int a, int b){
    int distance;
    float totalPrimes = 0;
    double media;

    if (a > b){
        distance = a - b;
        for (int i = (b+1); i <= distance; i++){
            if (numPrimo(i)){
                printf(" %i ", i);
                totalPrimes += i;
            }
            else {
                continue;
            }
        }
    }
    else {
        distance = b - a;
        for (int i = (a+1); i <= distance; i++){
            if (numPrimo(i)){
                printf(" %i ", i);
                totalPrimes += i;
            }
            else {
                continue;
            }
        }
    }
    printf("\ntotal: %f\n", totalPrimes);
    media = totalPrimes / distance;
    printf("%.3f", media);
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

