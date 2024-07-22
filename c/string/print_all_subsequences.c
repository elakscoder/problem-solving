#include<stdio.h>
#define n 100

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

void Subsequence(char *str)
{
    int size = len(str);
    int length = power(2,size);

    for(int i=0;i<length;i++)
    {
        printf("Subsequence %d: ",i+1);

        for(int j=0;str[j]!='\0';j++)
        {
            if(i & (1<<j))
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }

}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    Subsequence(str);

    return 0;
}