#include<stdio.h>
#define n 50
#define INT_MAX 1000
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

void fillfreq(char *find,int freq[])
{
    for(int i=0; find[i] != '\0' ;i++)
    {
        freq[find[i] - 'A']++;
    }
}

void mini(char *str,char *find,int *start,int *end)
{
    int l = 0;
    int r = 0;
    int min = INT_MAX;
    int hash[ascii] = {0};
    int freq[ascii] = {0};
    int len = length(find);
    int cnt = 0;
    int next = INT_MAX;

    fillfreq(find,freq);

    while(str[r] != '\0')
    {  

        hash[str[r]-'A']++;

        if(hash[str[r]-'A'] <= freq[str[r]-'A'])
        {
            cnt++;
            if(cnt == 2)
            {
                next = r;
            }
        }
        printf("count = %d\n",cnt);
        if(cnt == len)
        {
            if((r-l+1)<min)
            {
                min = r - l + 1;
                *end = r;
                *start = l;
            }
            for(int i=0;find[i] != '\0';i++)
            {
                hash[find[i]-'A'] = 0;
            }
            cnt = 0;
            l = next;
            r = next - 1;
        }
        r++;
    }
    for(int i=*start;i<=*end;i++)
    {
        printf("%c",str[i]);
    }
}

int main()
{
    char str[n];
    char find[n];
    int start;
    int end;

    printf("Enter the string: ");
    scanf("%s",str);

    printf("Enter the string to find: ");
    scanf("%s",find);

    mini(str,find,&start,&end);

    return 0;
}