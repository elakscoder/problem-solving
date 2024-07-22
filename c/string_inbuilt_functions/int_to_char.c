#include<stdio.h>

char ctoi(int c)
{
    return c + '0';
}

int main()
{
    int c;

    printf("Enter the integer to convert to char: ");
    scanf("%d",&c);

    char ans = ctoi(c);

    printf("%c",ans);

    return 0;
}