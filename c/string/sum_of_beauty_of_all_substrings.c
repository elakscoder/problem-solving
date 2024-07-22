#include<stdio.h>
#define n 20
#define ascii 128
#define INT_MAX 10000

void flush(char *str,int len)
{
    for(int i=0;i<len+1;i++)
    {
        str[i] = '\0';
    }
}

int size(char *str)
{
    int cnt = 0;
    while(*str != '\0')
    {
        cnt++;
        str++;
    }
    return cnt;
}

int count(char *ans,int index,int hash[])
{
    int max = 0;
    int min = INT_MAX;

    hash[ans[index-1]]++;

    for(int i=0; i<index; i++)
    {
        if(hash[ans[i]]>max)
        {
            max = hash[ans[i]];
        }
        if(hash[ans[i]]<min)
        {
            min = hash[ans[i]];
        }
    }

    return max - min;
}

int sum(char *str)
{
    int len = size(str);
    char ans[len];
    int index = 0;
    int sum = 0;
    flush(ans,len);

    for(int i=0;i<len;i++)
    {
        flush(ans,index);
        int hash[ascii] = {0};

        index = 0;

        for(int j=i;j<len;j++)
        {
            ans[index++] = str[j];
            sum += count(ans,index,hash);
        }
    }
    
    return sum;
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    int ans = sum(str);

    printf("Sum of Beauty of all substrings: %d",ans);

    return 0;
}