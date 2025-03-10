#include <stdio.h>
#include <stdlib.h>

int main() {
    // File  declaration
    FILE *file;

    // Create and write to a file
    file = fopen("intern.txt", "w");  // 'w' mode opening the file for writing. If the file doesn't exist, it will be created.
    if (file == NULL) {
        printf("Error in opening file for writing\n");
        return 1;  // Exiting the program if file cannot be opened
    }
    fprintf(file, "This is a demonstration of various file operations in C.\n");
    fclose(file);  // Closing the file after writing

    // Reading from the file
    file = fopen("example.txt", "r");  // 'r' mode opens the file for reading
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;  // Exiting the program if file cannot be opened
    }
    char ch;
    printf("Reading from the file:\n");
    while ((ch = fgetc(file)) != EOF) {  // Reading each character until end of file (EOF)
        putchar(ch);  // Displaying the character to the console
    }
    fclose(file);  // Closing the file after reading

    // Appending to the file
    file = fopen("example.txt", "a");  // 'a' mode opens the file for appending. If the file doesn't exist, it will be created.
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;  // Exit the program if file cannot be opened
    }
    fprintf(file, "Appending new data to the file.\n");
    fclose(file);  // Closing the file after appending

    // Reading from the file again to see the appended content
    file = fopen("intern.txt", "r");  // Opening the file for reading again
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;  // Exiting the program if file cannot be opened
    }
    printf("\nReading from the file after appending:\n");
    while ((ch = fgetc(file)) != EOF) {  // Reading the each character until end of file (EOF)
        putchar(ch);  // Displaying the character to the console
    }
    fclose(file);  // Closing the file after reading

    return 0;  // Exiting the program successfully
}
