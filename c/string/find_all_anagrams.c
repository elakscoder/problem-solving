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

void fillana(char *ana,int freq[])
{
    for(int i=0;ana[i] != '\0';i++)
    {
        freq[ana[i] - 'a']++;
    }
}

int anagrams(char *str,char *ana,int index[])
{
    int l = 0;
    int r = 0;
    int distinct = 0;
    int hash[ascii] =  {0};
    int freq[ascii] = {0};
    int len = length(ana);
    int i = 0;

    fillana(ana,freq);
    
    while(str[r] != '\0')
    {
        
        hash[str[r]-'a']++;

        if(hash[str[r]-'a'] == freq[str[r]-'a'])
        {
            distinct++;

            if(distinct == len)
            {
                index[i++] = l;
                hash[str[l]-'a']--;
                distinct--;
                l++;
            }
        }
        //no occurence
        else if(freq[str[r]-'a'] == 0)
        {
            distinct = 0;

            while(str[r+1] != '\0' && l < r+1)
            {
                hash[str[l]-'a']--;
                l++;
                
            }
        } 
        //greater count than occurence
        else if(hash[str[r]-'a'] > freq[str[r]-'a'])
        {
            while(hash[str[r]-'a'] > freq[str[r]-'a'])
            {
                hash[str[l]-'a']--;
                l++;
            }
        }

        r++;
    }

    return i;
}



int main()
{
    char str[n];
    char ana[n];
    int index[n];

    printf("Enter the string: ");
    scanf("%s",str);

    printf("Enter the string to check: ");
    scanf("%s",ana);

    int len = anagrams(str,ana,index);

    for(int i=0;i<len;i++)
    {
        printf("index %d: %d\n",i,index[i]);
    }

    return 0;
}