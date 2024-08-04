//  Given a string of integers find out all the possible words that can made out of it in continuous order. Eg: 11112

// ans: AAAAB
// AKAB
// AAKB
// AAAL etc.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void x(const char *digits, const char *word)
{
    if (strlen(digits) == 0)
    {
        printf("%s\n", word);
    }
    else
    {
        int num = digits[0] - '0';
        char new_word[100];
        snprintf(new_word, sizeof(new_word), "%s%c", word, 'A' + num - 1);
        x(digits + 1, new_word);

        if (strlen(digits) >= 2)
        {
            char temp[3] = {digits[0], digits[1], '\0'};
            num = atoi(temp);
            if (num <= 26)
            {
                snprintf(new_word, sizeof(new_word), "%s%c", word, 'A' + num - 1);
                x(digits + 2, new_word);
            }
        }
    }
}

int main()
{
    x("11112", "");
    printf("------\n");
    x("163", "");
    return 0;
}
