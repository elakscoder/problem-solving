#include <stdio.h>
#define n 1000

void rotate(int i, char *str)
{

    while (str[i] != ' ' && str[i] != '\0')
    {
        i++;
    }

    if (str[i] == ' ')
    {
        i++;
        rotate(i, str);
    }
    else
    {
        return;
    }

    for (int j = i; str[j] != '\0' && str[j] != ' '; j++)
    {
        printf("%c", str[j]);
    }

    printf(" ");
}

int main()
{
    char str[n];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    rotate(0, str);

    for (int i = 0; str[i] != ' '; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}