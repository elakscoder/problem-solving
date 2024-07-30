#include <stdio.h>
#include <string.h>

// Function to swap characters at positions i and j in the string
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations of lengths from 1 to n
void permute(char *str, int len) {
    int n = strlen(str);
    
    // Recursive function to generate permutations
    void permuteUtil(char *str, char *out, int depth, int maxDepth) {
        if (depth > maxDepth) {
            printf("%s ", out);
            return;
        }
        
        for (int i = 0; i < n; ++i) {
            out[depth - 1] = str[i];
            permuteUtil(str, out, depth + 1, maxDepth);
        }
    }
    
    // Temporary array to store permutations
    char out[len];
    
    // Generate permutations of different lengths
    for (int i = 1; i <= len; ++i) {
        out[i - 1] = '\0';  // Null-terminate the output string
        permuteUtil(str, out, 1, i);
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);
    
    // Generate and print permutations of lengths from 1 to n
    permute(str, n);
    
    return 0;
}
