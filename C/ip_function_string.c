#include<stdio.h>

int input(char str[] , int n)
{
    char ch;
    int i = 0;

    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }
    }

    str[i] = '\0';

    return i;

}

int main()
{
    char str[100];

    int n = input(str, 28);

    printf("%d %s",n,str);

    return 0;

}