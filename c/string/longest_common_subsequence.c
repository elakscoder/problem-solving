#include<stdio.h>
#define n 100

void strCopy(char arr[],char *ans)
{
    
    while((*ans++ = *arr++));
}

int strCmp(char *s1 , char *s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    return *s1 - *s2;
}

int len(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}

int power(int num,int m)
{
    int sum = 1;

    for(int i=0;i<m;i++)
    {
        sum *= num;
    }

    return sum;
}

void Subsequence(char *str,int size,char arr[][size+1])
{
    int length = power(2,size);

    char s[size+1];
    int index = 0;

    for(int i=0;i<length;i++)
    {
        index = 0;
        for(int j=0;j<size;j++)
        {
            if(i & (1<<j))
            {
                s[index++] = str[j];
            }
        }
        s[index++] = '\0';

        for(int k=0;k<index;k++)
        {
            arr[i][k] = s[k];
        }
    }

}

int main()
{
    char str1[n];
    char str2[n];
    char ans[n];

    printf("Enter the string1: ");
    scanf("%s",str1);

    printf("Enter the string2: ");
    scanf("%s",str2);

    int size1 = len(str1);
    int length1 = power(2,size1);
    char arr1[length1][size1+1];
   

    int size2 = len(str2);
    int length2 = power(2,size2);
    char arr2[length2][size2+1];

    Subsequence(str1,size1,arr1);
    Subsequence(str2,size2,arr2);

    /* for(int i=0;i<length1;i++)
    {
        printf("subsequence %d: %s\n",i,arr1[i]);
    } */

    /* for(int i=0;i<length2;i++)
    {
        printf("subsequence %d: %s\n",i,arr2[i]);
    } */

    int max = 0;

    for(int i=length1-1;i>=0;i--)
    {
        for(int j=length2-1;j>=0;j--)
        {
            if(strCmp(arr1[i],arr2[j])==0)
            {
                if(len(arr1[i])>max)
                {
                    max = len(arr1[i]);
                    strCopy(arr1[i],ans);
                }
            }
        }
    }

    printf("Length: %d\n",max);
    printf("Subsequence: %s",ans);

    return 0;
}