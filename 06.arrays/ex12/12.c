#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

// Define-se como triângulo inferior todos os elementos na forma matriz[i][j] que respeitem a seguinte condição j < i

int sum_triangle(int width, int height, int matrix[width][height]) {  // *matrix[] represents an array of pointers which is what a matrix is
    int sum = 0;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++){
            if (j < i)
                sum += matrix[i][j];
        }
    }
    return sum;
}


int main(int argc, char *argv[])
{
    int y, x;
    srand(time(NULL));

    printf("y -> ");
    scanf("%i", &y);

    printf("x -> ");
    scanf("%i", &x);
    int array[y][x];

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            array[i][j] = rand() % 5+1;
            printf("%i ", array[i][j]);
        }
        printf("\n");
    }

    printf("sum of lower triangle -> %i", sum_triangle(x, y, array));  // we need to pass a reference for some reason

    return EXIT_SUCCESS;
}
