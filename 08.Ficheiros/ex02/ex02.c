#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *filePtr;
    char user_number;
    char file_name[100];

    printf("number -> ");
    scanf("%c", &user_number);

    sprintf(file_name, "tabuada_%c.txt", user_number);// sprintf to format the file name

    filePtr = fopen(file_name, "w");
    if (filePtr == NULL) {
        printf("Couldn't open file");
        return EXIT_FAILURE; // exit if file opening fails
    }

    int num = user_number - '0'; // Convert to integer by subtracting by the ASCII valua of 0

    for (int i = 0; i < 10; i++) {
        fprintf(filePtr, "%2d * %2d = %2d\n", num, (i + 1), (i + 1) * num);
    }

    fclose(filePtr); // close the file

    return EXIT_SUCCESS;
}

