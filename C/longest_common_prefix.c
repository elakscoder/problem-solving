#include<stdio.h>
#include<string.h>

void swap(char a[] , char b[])
{
    char temp[20];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

void sortStr(int n,char string[n][20])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(strcmp(string[j],string[j+1])>0)
            {
                swap(string[j],string[j+1]);
            }
        }
    }
}

void scanString(int n,char string[n][20])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter string %d: ",i);
        scanf("%s",string[i]);
    }
}
 
void printString(int n,char string[n][20])
{
    for(int i=0;i<n;i++)
    {
        printf("%s ",string[i]);
    }
}

int length(int n,char string[n][20])
{
    sortStr(n,string);

    int j = 0;

    while(string[0][j] != '\0' || string[n-1][j] != '\0')
    {
        if(string[0][j] != string[n-1][j])
        {
            break;
        }

        j++;
    }

    return j;

}

void prefix(char string[][20],char ans[],int n)
{
    int m = length(n,string);
    int i = 0;

    for(i=0;i<m;i++)
    {
        ans[i] = string[0][i];
    }

    ans[i] = '\0';
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    char string[n][20];
    char ans[] = {0};

    scanString(n,string);

    prefix(string,ans,n);

    printf("%s",ans);

    return 0;
}