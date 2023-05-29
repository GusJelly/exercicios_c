#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b);
float media(float a, float b);
int upper(int a, int b);
int lower(int a, int b);

int main(int argc, char *argv[])
{
    int n1;
    int n2;
    printf("n1 -> ");
    scanf ("%i", &n1);
    printf("n2 -> ");
    scanf("%i", &n2);
    printf("\nMedia: %f\nSoma: %i\nMaior: %i\nMenor: %i", media((float)n1, (float)n2), sum(n1, n2), upper(n1, n2), lower(n1, n2));

    return EXIT_SUCCESS;
}

int sum(int a, int b){
    return a + b;
}

float media(float a, float b){
    return ((float)sum(a, b) / 2);
}

int upper(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int lower(int a, int b){
    if (a < b)
        return a;
    else
        return b;
}

