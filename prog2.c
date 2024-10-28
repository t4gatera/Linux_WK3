#include <stdio.h>

int main() {
    // Define the file path
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    FILE *file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read and print each character from the file until end of file (EOF)
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}

