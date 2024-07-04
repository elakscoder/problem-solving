//getchar
#include <stdio.h>

int main() {
    int c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: %d",c);
    
    putchar('\n');
    return 0;
}