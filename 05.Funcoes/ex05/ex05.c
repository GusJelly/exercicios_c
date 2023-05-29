#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float factorial(int n);
float combination(int n, int k);

int main(int argc, char *argv[])
{
    float m;  // number of rows for triangle
    printf("How many rows -> ");
    scanf("%f", &m);



    return EXIT_SUCCESS;
}

float factorial(int n){  // calculates a factorial
     if (n == 1)
         return 1;
     else
         return (factorial(n) * factorial(n - 1));
}

float combination(int n, int k){  // calculates a combination for the pascal triangle
    return (factorial(n) / (factorial(k) * (n - k)));
}

