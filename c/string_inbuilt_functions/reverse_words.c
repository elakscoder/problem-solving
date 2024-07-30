#include <stdio.h>
#define len 1000

int main()
{
    char str[len][len];

    printf("Enter the string: ");

    int i = 0;

    while (1)
    {
        scanf("%s", str[i]);
        if (getchar() == '\n')
        {
            break;
        }

        i++;
    }

    for (int j = i; j >= 0; j--)
    {
        printf("%s ", str[j]);
    }

    return 0;
}