#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checIfOdd(int n);

int main(int argc, char *argv[])
{
    int number;

    do {
        printf("Type a number to check if it is a pair: ");
        scanf("%i", &number);

        if (checIfOdd(number)==1){
            printf("\n%i is a pair!\n", number);
        }
        else if (checIfOdd(number)==2){
            printf("\n%i is not a pair!\n", number);
        }
        else {
            printf("\nExiting program...\n");
        }
    }
    while(checIfOdd(number));

    return EXIT_SUCCESS;
}

// this function tells me if a number is either pair, odd, or zero
int checIfOdd(int n){
    if (n % 2 == 0 && n != 0){
        return 1;
    }
    else if (!(n%2==0) && n!=0){
        return 2;
    }
    else {
        return 0;
    }
}

