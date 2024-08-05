#include<stdio.h>
#define len 1000

int length(char *str)
{
    int cnt = 0;

    while(*str)
    {
        cnt++;
        str++;
    }

    return cnt;
}

void print(int start,int end,char *str)
{
    if(str[start-1] == '\0')
    {
        return;
    }
    while(str[start] != ' ' && str[start] != '\0')
    {
        start++;
    }

    print(start+1,end,str);
    for(int i=start+1;str[i]!='\0'&& str[i]!=' ';i++)
    {
        printf("%c",str[i]);
    }
    printf(" ");

    if(start-1 == 0)
    {
           for(int i=start-1;str[i]!='\0'&& str[i]!=' ';i++)
    {
        printf("%c",str[i]);
    }
        
    }
}

int main()
{
    char str[len];

    printf("Enter string: ");
    scanf("%[^\n]%*c",str);

    int n = length(str);

    print(1,n,str);

    for(int i=0;str[i] != ' ';i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}