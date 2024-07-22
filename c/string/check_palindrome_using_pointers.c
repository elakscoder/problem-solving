#include<stdio.h>
#define n 50

void check(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;
    while(*temp && *str == *temp)
    {
        str--;
        temp++;
    }

    if(*temp)
    {
        printf("Not a palindrome");
    }
    else 
    {
        printf("Palindrome");
    }
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    check(str);

    return 0;
}