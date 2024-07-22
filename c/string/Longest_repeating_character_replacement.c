#include<stdio.h>
#define n 50
#define ascii 26

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

int replace(char *str,int k)
{
    int len = length(str);
    int l = 0;
    int r = 0;
    int maxLen = 0;
    int maxFreq = 0;
    int size = 0;
    int change = 0;
    int hash[ascii] = {0};

    while(r < len)
    {
        hash[str[r]-'A']++;

        size = r-l+1;

        maxFreq = maxFreq > hash[str[r]-'A'] ? maxFreq : hash[str[r]-'A'];

        change = size - maxFreq;

        while(change > k)
        {
            hash[str[l]-'A']--;
            maxFreq = 0;
            for(int i=0;i<ascii;i++)
            {
                if(hash[i]>maxFreq)
                {
                    maxFreq = hash[i];
                }
            }
            l++;
            
            change = (r-l+1) - maxFreq;
        }

        if(change <= k)
        {
            maxLen = maxLen>r-l+1 ?maxLen : r-l+1;
        }
        printf("maxLen: %d\n",maxLen);
        printf("l: %d,r: %d\n",l,r);

        r++;
    }

    return maxLen;
}

int main()
{
    char str[n];
    int k;

    printf("Enter the string: ");
    scanf("%s",str);

    printf("Enter k: ");
    scanf("%d",&k);

    int ans = replace(str,k);

    printf("Longest repeating character replacement: %d",ans);

    return 0;
}