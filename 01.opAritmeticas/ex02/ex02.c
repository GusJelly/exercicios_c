#include <stdio.h>

int operacaoAritmetica(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf ("Insert a number greater than 0: ");
    scanf("%d", &n);

    if (n > 0){
        printf("\n%d", operacaoAritmetica(n));
    }
    else {
        while (!(n > 0))
        {
            printf ("You need to do as I say child! ");
            scanf("%d", &n);
        }
        printf("\n%d", operacaoAritmetica(n));
        
    }

    return 0;
}

int operacaoAritmetica(int n){
    return n % 2;
}
