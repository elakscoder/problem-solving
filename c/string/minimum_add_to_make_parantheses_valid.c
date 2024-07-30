#include <stdio.h>
#define size 100

int count(char *str)
{
    char stack[100];
    int top = -1;
    int cnt = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            top++;
            stack[top] = str[i];
        }
        else if (str[i] == ')')
        {
            if (top != -1)
            {
                top--;
            }
            else
            {
                cnt++;
            }
        }
    }

    if (top != -1)
    {
        cnt = cnt + top + 1;
    }

    return cnt;
}

int main()
{
    char str[size];

    printf("Enter the string: ");
    scanf("%s", str);

    printf("THe minimum add to make parantheses valid: %d", count(str));

    return 0;
}