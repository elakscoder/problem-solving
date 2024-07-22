#include<stdio.h>
#define n 20
/*
//pointing to the same location using pointers

char *strcopy(char *str)
{
    return str;
}

int main()
{
    char str[n];

    printf("Enter a string: ");
    scanf("%s",str);

    char *strc;
    strc = strcopy(str);

    printf("The entered string is: %s\n",str);
    printf("The copied string is: %s",strc);

    return 0;
}  */

//copying into separate memory by traversing

void strcopyl(char *to,char *from)
{
    while(*to++ = *from++);
}

int main()
{
    char str[n];

    printf("Enter a string: ");
    scanf("%s",str);

    char strc[n];
    strcopyl(strc,str);

    printf("The entered string is: %s\n",str);
    printf("The copied string is: %s",strc);

    return 0;

}