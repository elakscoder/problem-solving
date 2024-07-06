#include <stdio.h>
#include <ctype.h>

void toUpperCase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char myString[] = "Hello, World!";

    toUpperCase(myString);

    printf("Uppercase string: %s\n", myString);
    
    return 0;
}
