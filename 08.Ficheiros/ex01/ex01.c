#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *file;
    char ch;
    int line_count = 0;

    // Open the file in read mode
    file = fopen("input.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("file can't be opened\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {  // EOF represents the end of the file so we know when to stop reading from the STREAM
        if (ch == '\n') {  // we count a line every time we find a newline character
            line_count++;
        }
    }

    // Close the file
    fclose(file);

    printf("number of lines -> %i\n", line_count);

    return EXIT_SUCCESS;
}

