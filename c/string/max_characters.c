#include<stdio.h>
#define n 100
#define ascii 128

void max(char *str)
{
    int max = 0;
    int ch = 0;
    int freq[ascii] = {0};

    while(*str != '\0')
    {
        freq[*str]++;
        str++;
    }

    for(int i=0;i<ascii;i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            ch = i;
        }
    }

    printf("Highest frequency is %c occurs %d times",ch,max);
}

int main()
{
    char str[n];

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    max(str);

    return 0;
}