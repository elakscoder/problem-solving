#include<stdio.h>
#define n 50
#define ascii 127

int count(char *str,int k)
{
    int l = 0;
    int r = 0;
    int hash[ascii] = {0};
    int cnt = 0;
    int sum = 0;
    int max = 0;

    while(str[r] != '\0')
    {
        if(hash[str[r]] == 0)
        {
            cnt++;
        }
        hash[str[r]]++;
        while(cnt>k)
        {
            hash[str[l]]--;
            if(hash[str[l]] == 0)
            {
                cnt--;
            }
            l++;
        }

        if(cnt<=k)
        max = r-l+1>max?r-l+1:max;

        r++;
        
    }

    return max;
}

int main()
{
    char str[n];
    int k;

    printf("Enter the string: ");
    scanf("%s",str);

    printf("Enter k: ");
    scanf("%d",&k);

    int ans = count(str,k);

    printf("ans: %d",ans);

    return 0;
}