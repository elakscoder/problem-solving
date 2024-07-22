#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50];  // Ensure the destination array is large enough

    // Copy the string from source to destination
    strcpy(destination, source);

    // Print both strings
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
