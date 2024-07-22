#include<stdio.h>
#include<stdlib.h>

int RtoI(char a)
{
    switch(a)
    {
        case 'I':
        return 1;

        case 'V':
        return 5;

        case 'X':
        return 10;

        case 'L':
        return 50;

        case 'C':
        return 100;

        case 'D':
        return 500;

        case 'M':
        return 1000;

        default:
        return 0;
    }
}

int romantoint(char *a)
{
    int num = RtoI(a[0]);

    for(int i=1;a[i]!='\0';i++)
    {
        int prev = RtoI(a[i-1]);
        int curr = RtoI(a[i]);

        if(prev < curr) 
        {
            num = (num - prev) + (curr - prev);
        } 
        else
        {
            num +=  curr;
        }
    }

    return num;
}

int main()
{
    char a[100];

    printf("Enter a roman: ");
    scanf("%s",a);

    printf("Roman to integer: %d",romantoint(a));

    return 0;
}