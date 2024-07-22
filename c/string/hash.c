#include<stdio.h>
#define n 100

void hash(char *str)
{
    int arr[128] = {0};

    while(*str)
    {
        arr[*str]++;
        str++;
    } 

    for(int i=0;i<128;i++)
    {
        if(arr[i]>0)
        printf("%c - %d\n",i,arr[i]);
    }
}

int main()
{
    char str[n];

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    printf("The entered line is: %s\n",str);
    hash(str);

    return 0;
}