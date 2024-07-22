#include<stdio.h>
#define n 100

int equal(char *str)
{
    int close = 0;
    int open = 0;

    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] == ')')
        close++;
    }

    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] == '(')
        {
            open++;
        }
        if(str[i] == ')')
        {
            close--;
        }
        if(open == close)
        {
            return i+1;
        }
    }
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    printf("%d",equal(str));

    return 0;
}