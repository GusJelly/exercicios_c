#include <stdio.h>

float equationSolver(float a, float b);

int main(int argc, char const *argv[])
{
    float a, b;
    printf("Insert a whole number(a): ");
    scanf("%f", &a);

    printf("Inser another whole number(b): ");
    scanf("%f", &b);

    printf("%f\n", equationSolver(a,b));

    return 0;
}

float equationSolver(float a, float b){
    float x;
    x = -(b/a);
    return x;
}
