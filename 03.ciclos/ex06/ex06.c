#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

float lineCalculator(float x);

int main(int argc, char *argv[])
{
    float number;
    int count = 1;
    int module = 1;

    printf("n -> ");
    scanf("%f", &number);

    float numberLines = lineCalculator(number);
    printf("\n%f\n", numberLines);
    printf("\n");

    if ((numberLines / module) == numberLines){
        for (int i = 1; i <= numberLines; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%i ", count);
                count++;
            }
            printf("\n");
        } 
    }
    else {
        printf("ERROR with user input");
    }

    return EXIT_SUCCESS;
}


float lineCalculator(float x){
    float n1=0;

    n1 = (-1 + sqrt(1+8*x)) / 2;  // the number of lines is always the positive solution of the +-;

    if(!isdigit(n1)) {  // this function checks if the value can be an integer;
        return n1;
    }
    else {
        return 0;
    }
}

