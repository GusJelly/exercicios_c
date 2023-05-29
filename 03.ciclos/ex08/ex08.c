#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int a);
int combination(int n, int k);

int main(int argc, char *argv[])
{
    int n;  // number of rows 
    printf("number of lines -> ");
    scanf("%i", &n);

    int lengthPyramid = (n*2)-1;
    int filledSpace = 1;
    int blankSpace;

    for (int i = 0; i < n; i++){
        blankSpace = lengthPyramid - (i+1);
        for (int h = 0; h < blankSpace; h++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++){
            printf(" %i", combination(i, j));
        }
        printf("\n");
    }

//    for (int i = 0; i < n; i ++){
//        blankSpace = lengthPyramid - filledSpace;
//        for (int j = 0; j < blankSpace/2; j++){
//            printf(" 0 ");
//        }
//        for (int k = 0; k < filledSpace; k++){
//            printf(" %i ", combination(i+1, k));
//        }
//        for (int h = 0; h < blankSpace/2; h++){
//            printf(" 0 ");
//        }
//        filledSpace += 2;
//
//        printf("\n");
//    }

    return EXIT_SUCCESS;
}

int factorial(int x){
    for (int i = x-1; i > 0; i--){
        x *= i;
    }
    return x;
}

int combination(int n, int k){
    if (n==0 || k==0 || n==k){
        return 1;
    }
    int x = factorial(n)/(factorial(k)*factorial(n-k));
    return x;
}

