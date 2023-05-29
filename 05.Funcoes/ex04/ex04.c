#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxDivCom(int a, int b);

int main(int argc, char *argv[])
{
    int a = 12;
    int b = 6;
    int mdc;

    mdc = maxDivCom(a, b);
    printf("MDC -> %i", mdc);

    return EXIT_SUCCESS;
}

int maxDivCom(int a, int b){
    int denominator;
    if (a > b){
        for (int i = 1; i <= b; i++){
            if ((a % i == 0) && (b % i == 0)){
                denominator = i;
            }
            else {
                continue;
            }
        }
    }
    if (a < b){
        for (int i = 1; i <= a; i++){
            if ((a % i == 0) && (b % i == 0)){
                denominator = i;
            }
            else {
                continue;
            }
        }
    } 

    return denominator;
}

