#include <stdio.h>

int areaQuadrado (int l);

int main(int argc, char const *argv[])
{
    int lado;
    printf("lado: ");
    scanf("%d", &lado);
    printf("%d\n", areaQuadrado(lado));
    return 0;
}

int areaQuadrado (int l){
    return l*l;
}
