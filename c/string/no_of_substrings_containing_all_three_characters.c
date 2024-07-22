#include<stdio.h>
#define n 50

int length(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}
int mini(int a,int b,int c)
{
    if(a<b && a<c)
    {
        return a;
    }
    else if(b<a && b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int count(char *str)
{
    
    int len = length(str);
    int sum = 0;
    int hash[3] = {-1,-1,-1};

    for(int i=0;i<len;i++)
    {
        hash[str[i]-'a'] = i;
        sum += 1 + mini(hash[0],hash[1],hash[2]);
    }

    return sum;
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    int ans = count(str);

    printf("count : %d",ans);

    return 0;
}