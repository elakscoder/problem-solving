#include <stdio.h>

int length(char *str, int len)
{
    int cnt = 0;

    while (*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}

void remov(char *str, int i)
{
    while (str[i + 1] != '\0')
    {
        str[i] = str[i + 1];
        i++;
    }

    str[i] = '\0';
}

void balance(char *str)
{
    char stack[100];
    int index[100];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            top++;
            stack[top] = str[i];
            index[top] = i;
        }
        else if (str[i] == ')')
        {
            if (top != -1)
            {
                top--;
            }
            else
            {
                remov(str, i);
                i--;
            }
        }
    }

    while (top != -1)
    {
        remov(str, index[top]);
        top--;
    }
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    balance(str);

    printf("%s", str);

    return 0;
}