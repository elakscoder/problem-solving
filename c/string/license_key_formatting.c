#include<stdio.h>
#define n 100

int size(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt ++;
        str ++;
    }

    return cnt;
}

int length(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        if(*str != '-')
        {
            cnt++;
        }
        
        str++;
    }

    return cnt;
}

void license(char *str,char *ans,int k)
{
    int len = length(str);
    int s = size(str);
    //printf("len: %d\n",len);
    int rem = len % k;
    int hy = (len/k)+(len%k)-1;
    int total = hy + len;
   /*  printf("%d",total); */
    int i = 0;
    int j = 0;

    if(rem == 0)
    {
        rem = k;
    }

    for(j=0;j<rem;j++)
    {
        ans[j] = str[i++];
    }

    ans[rem] = '-';
    int cnt = 0;

    for(j=rem+1;j<total;j++)
    {
        if(str[i] == '-')
        {
            i++;
        }

        cnt++;
        if(cnt > k)
        {
            cnt = 0;
            ans[j] = '-';
        }
        else
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - ('a'-'A');
            }
            ans[j] = str[i++];
        }
    }
    
    ans[total] = '\0';

}

int main()
{
    char str[n];
    char ans[n];
    int k;

    printf("Enter k: ");
    scanf("%d",&k);

    printf("Enter the string: ");
    scanf("%s",str);

    license(str,ans,k);

    printf("%s",ans);

    return 0;
}