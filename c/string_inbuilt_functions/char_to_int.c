#include<stdio.h>

int ctoi(char c)
{
    return c - '0';
}

int main()
{
    char c;

    printf("Enter the char to convert to integer: ");
    scanf("%c",&c);

    int ans = ctoi(c);

    printf("%d",ans);

    return 0;
}