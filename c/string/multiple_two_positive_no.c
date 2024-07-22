#include<stdio.h>
#define n 10

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

int ctoi(char a)
{
    return a -'0';
}

void strMul(char *str1,char *str2,char *ans)
{
    int m = length(str1);
    int k = length(str2);
    int value = 0;
    int a[m+k];
    for(int i=0;i<m+k;i++)
    {
        a[i] = 0;
    }

    for(int i=m-1;i>=0;i--)
    {
        for(int j=k-1;j>=0;j--)
        {
            a[i+j+1] += (str1[i]-'0')*(str2[j]-'0');
            a[i+j] += a[i+j+1]/10;
            a[i+j+1] %= 10;
        }
    }

    printf("m: %d",m);
    printf("k: %d\n",k);

    int i = 0;
    int j = 0;

    while(a[i] != 0)
    {
        i++;
    }
    int index = 0;
    for(j=i+1;j<m+k;j++)
    {
        ans[index++] = a[j] + '0';
    }

    ans[index] = '\0';


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

    strMul(str1,str2,ans); 

    printf("\nMultiplication of strings: %s and %s gives %s\n",str1,str2,ans);

    return 0;

}