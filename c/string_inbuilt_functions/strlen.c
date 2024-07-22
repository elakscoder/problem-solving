#include<stdio.h>
#define n 20

int sizeOf(char str[])
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}

int main()
{
    char str[n];

    printf("Enter a string: ");
    scanf("%s",str);

    printf("The entered string is: %s\n",str);
    printf("The size of the string is: %d",sizeOf(str));

    return 0;
}