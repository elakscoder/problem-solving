#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to swap characters at positions i and j in the string
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations without repetition
void permute(char *str, bool *used, char *out, int len, int depth)
{
    int n = strlen(str);

    // Base case: when depth equals len, print the permutation
    if (depth == len)
    {
        printf("%s ", out);
        return;
    }

    // Recursive case: generate permutations
    for (int i = 0; i < n; ++i)
    {
        if (!used[i])
        {
            used[i] = true;
            out[depth] = str[i];
            permute(str, used, out, len, depth + 1);
            used[i] = false;
        }
    }
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);

    // Temporary array to store permutations
    char out[n];

    // Array to keep track of used characters
    bool used[n];
    memset(used, false, sizeof(used));

    // Generate and print permutations of lengths from 1 to n
    for (int len = 1; len <= n; ++len)
    {
        permute(str, used, out, len, 0);
    }

    return 0;
}
