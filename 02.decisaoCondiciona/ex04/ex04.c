#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Insert whole number: ");
    scanf("%d", &number);

    if(number > 0){
        printf("%d is a positive number\n", number);
    }
    else if(number < 0){
        printf("%d is a negative number\n", number);
    }
    else{
        printf("The number is zero\n");
    }

    return 0;
}
