#include <stdio.h>

float areaTriangulo(float base, float altura){
    return (base * altura) / 2;
}

int main(int argc, char const *argv[])
{
    float base, altura;
    float result;

    printf("Insert de triangle's base: ");
    scanf ("%f", &base);
    printf("\nInsert the triangles height: ");
    scanf ("%f", &altura);

    result = areaTriangulo(base, altura);

    printf("\nThe triangle's area is: %f", result);

    return 0;
}

