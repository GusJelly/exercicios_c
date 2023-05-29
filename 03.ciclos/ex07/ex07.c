#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n;
    printf("Type a number for n -> ");
    scanf("%i", &n);
<<<<<<< HEAD

    if (!(n%2 != 0 && n >= 3)){
        printf("INPUT ERROR");
        return 0;
    }
    
    int half = n / 2;
    int filledSpace = 1;
    int blankSpace; 

    // first half of the pyramid:
    for (int i = 0; i < n - half; i ++){
        blankSpace = n - filledSpace;
        for (int k = 0; k < blankSpace/2; k++){
            printf(" ");
        }
        for (int h = 0; h < filledSpace; h++){
            printf("*");
        }
        for (int g = 0; g < blankSpace/2; g++){
            printf(" ");
        }
        filledSpace += 2;
        printf("\n");
    }
    // second half:
    half = n / 2;
    filledSpace = n-2;
    for (int i = 0; i < n - (half+1); i++){
        blankSpace = n - filledSpace;
        for (int k = 0; k < blankSpace/2; k++){
            printf(" ");
        }
        for (int h = 0; h < filledSpace; h++){
            printf("*");
        }
        for (int g = 0; g < blankSpace/2; g++){
            printf(" ");
        }
        filledSpace -= 2;
=======
    
    int halfLines = n / 2;

    for (int i = 1; i <= n - halfLines; i ++){
        for (int j = 1; j <= n; j++){
            printf(" * ");
        }
>>>>>>> 231afd33581532d7b3d58b50c7321e2a2c1bc2f1
        printf("\n");
    }

    return EXIT_SUCCESS;
}

