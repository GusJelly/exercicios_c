#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    int root1, root2, discriminant;

    printf("Insert a: ");
    scanf("%i", &a);
    printf("Insert b: ");
    scanf("%i", &b);
    printf("Insert c: ");
    scanf("%i", &c);

    discriminant = (b*b) - (4*a*c);
	root1 = ((-b + sqrt(discriminant)) / 2);
	root2 = ((-b - sqrt(discriminant)) / 2);

    if(a == 0){
        printf("The equation is unsolvable\n");
        return 0;
    }

	if (root1 == root2){
		printf("The root is: %i", root1);
	}
    else{
        printf("The roots are: (%i, %i)", root1, root2);
    }
	
    return 0;
}
