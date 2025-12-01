#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char input[100];
    char buffer[100];

    // Open file for writing
    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);

    // Write to file
    fprintf(fptr, "%s", input);
    fclose(fptr);
    printf("Data written to file successfully.\n");

    // Open file for reading
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nReading from file:\n");
    // Read from file
    if (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    } else {
        printf("File is empty or error reading.\n");
    }

    fclose(fptr);

    return 0;
}
