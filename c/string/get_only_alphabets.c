#include <stdio.h>

int main() {
    char input[100];

    printf("Enter a string (letters only): ");
    scanf("%[A-Za-z]", input);
    printf("You entered: %s\n", input);

    return 0;
}
