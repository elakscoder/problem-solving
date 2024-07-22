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

void fillfreq(char *find, int freq[])
{
    for(int i=0; find[i] != '\0'; i++)
    {
        freq[find[i] - 'A']++;
    }
}

void mini(char *str, char *find, int *start, int *end)
{
    int l = 0;
    int r = 0;
    int min = INT_MAX;
    int hash[ascii] = {0};
    int freq[ascii] = {0};
    int len = length(find);
    int cnt = 0;

    fillfreq(find, freq);

    while(str[r] != '\0')
    {
        hash[str[r] - 'A']++;
        if(hash[str[r] - 'A'] <= freq[str[r] - 'A'])
        {
            cnt++;
        }

        while(cnt == len)
        {
            if((r - l + 1) < min)
            {
                min = r - l + 1;
                *end = r + 1;
                *start = l;
            }

            hash[str[l] - 'A']--;
            if(hash[str[l] - 'A'] < freq[str[l] - 'A'])
            {
                cnt--;
            }
            l++;
        }

        r++;
    }
}

int main()
{
    char str[n];
    char find[n];
    int start = 0;
    int end = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the string to find: ");
    scanf("%s", find);

    mini(str, find, &start, &end);

    if(end > start)
    {
        for(int i = start; i < end; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("No such window exists");
    }

    return 0;
}
