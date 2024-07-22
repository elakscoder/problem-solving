#include<stdio.h>
#define size 20

int strlength(char *string)
{
    int count = 0;
    while(*string++ != '\0')
    {
        count++;

    }

    return count;
}

void swap(char *a,char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *string)
{
    int n = strlength(string);

    for(int i=0;i<n/2;i++)
    {
        swap(&string[i],&string[n-1-i]);
    }

}

int main()
{
    char string[size];

    printf("Enter the string: ");
    scanf("%[^\n]",string);

    printf("Before swapping: %s\n",string);

    reverse(string);

    printf("After swapping: %s\n",string);

    return 0;

}