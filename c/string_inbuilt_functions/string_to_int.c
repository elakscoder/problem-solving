#include<stdio.h>
#define n 100

int stoi(char *str)
{
    int result = 0;

    while(*str != '\0')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result;
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    int ans = stoi(str);

    printf("%d",ans);

    return 0;
}