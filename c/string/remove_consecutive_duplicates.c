#include <stdio.h>
#define size 100

int compare(char *str1, char *str2)
{
    while (*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

void assign(char stack[][size], int top, char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        stack[top][i] = str[i];
        i++;
    }

    stack[top][i] = '\0';
}

void remov(int n, char str[][size])
{
    char stack[n][size];
    int index[size] = {0};
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        if (top == -1 || compare(stack[top], str[i]))
        {
            top++;
            assign(stack, top, str[i]);
            for (int i = 0; i < top; i++)
            {
                if (!(compare(stack[top], str[i])))
                {
                    top = i - 1;
                    break;
                }
            }
        }
        else if (!(compare(stack[top], str[i])))
        {
            index[top]++;
        }

        if (compare(str[i], str[i + 1]))
        {
        }
    }

    for (int i = 0; i < top + 1; i++)
    {
        if (index[i] == 0)
            printf("%s\n", stack[i]);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    char str[n][size];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Entered string %d is: %s\n", i, str[i]);
    }

    remov(n, str);

    return 0;
}