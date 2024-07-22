#include<stdio.h>
#define col 20

void swap(char **str1,char **str2)
{
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int strcmp(char str1[],char str2[])
{
    while(*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    return *str1-*str2;
}

void sortStr(char str[][col],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                swap(&str[j],&str[j+1]);
            }
        }
    }
}

void scan(char str[][col],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
}

void print(char str[][col],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Entered word %d: ",i+1);
        printf("%s\n",str[i]);
    }
}

int main()
{
    int n;

    printf("Enter the number of words: ");
    scanf("%d",&n);

    char str[n][col];

    scan(str,n);
    print(str,n);

    sortStr(str,n);

    print(str,n);
    return 0;
}