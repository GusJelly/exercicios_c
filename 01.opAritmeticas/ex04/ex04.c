#include <stdio.h>

int calculatorDecomposicao(int dias);

int main(int argc, char const *argv[])
{
    int dias;
    printf("Numero de dias: ");
    scanf("%d", &dias);

    calculatorDecomposicao(dias);
    return 0;
}

int calculatorDecomposicao(int dias){
    int years = dias / 365;
    int weeks = (dias % 365) / 7;
    int days = ((dias % 365) % 7);
    int minutes = 1440 * dias;

    printf("Anos: %d\nSemanas: %d\nDias: %d\nMinutos: %d", years, weeks, days, minutes);

   return 0; 
}
