#include <stdio.h>
#define col 100

void assign(char *temp, char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        temp[i] = str[i];
        i++;
    }

    temp[i] = '\0';
}

void compare(char *temp, char *str)
{
    int i = 0;
    while (temp[i] != '\0' && str[i] != '\0' && str[i] == temp[i])
    {
        i++;
    }
    if (str[i] != temp[i])
    {
        temp[i] = '\0';
    }
}

void longest(int n, char str[][col], char temp[])
{
    assign(temp, str[0]);

    printf("temp: %s\n", temp);

    for (int i = 1; i < n; i++)
    {
        compare(temp, str[i]);
    }
}

int main()
{
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char str[n][col];
    char ans[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Entered string %d %s\n", i, str[i]);
    }

    longest(n, str, ans);

    printf("The longest common prefix is: \"%s\"", ans);

    return 0;
}