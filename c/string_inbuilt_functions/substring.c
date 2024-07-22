#include<stdio.h>
#define n 50

char *substring(char *str,int index,int no,char *ans)
{

    int j = 0;

    for(int i=index-1;i<index+no-1;i++)
    {
        ans[j++] = str[i];
    }

}

int main()
{
    char str[n];
    char ans[n];
    int index;
    int no;

    printf("Enter the string: ");
    scanf("%s",str);

    printf("Enter the start index: ");
    scanf("%d",&index);

    printf("Enter the number of characters: ");
    scanf("%d",&no);

    substring(str,index,no,ans);

    printf("The entered string is: %s",str);
    printf("The substring is: %s",ans);

    return 0;

}