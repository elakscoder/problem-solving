#include<stdio.h>

void inc(char *a)
{
    *a = ++(*a);
}

int main()
{
    char a;

    printf("Enter the char: ");
    scanf("%c",&a);

    inc(&a);

    printf("%c",a);

    return 0;

}