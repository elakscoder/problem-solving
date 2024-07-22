#include<stdio.h>
#define n 100

int length(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt ++;
        str ++;
    }

    return cnt;
}


int validate(char *str)
{
    int len = length(str);
    int result = 0;

    if(len > 15)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str != '.')
        {
            result = result * 10 +(*str - '0');
            printf("Result: %d",result);
        }
        else if(*str == '.' && result <=0 || result >=255)
        {
            return 0;
        }
        else 
        {
            result = 0;
        }
        str++;
    }

    return 1;
    
}

int main()
{
    char ip[n];

    printf("Enter the ip address: ");
    scanf("%s",ip);

    if(validate(ip))
    {
        printf("\nValid ip");
    }
    else 
    {
        printf("\nNot a valid ip");
    }

    return 0;
}