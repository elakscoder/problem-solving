#include<stdio.h>

#define ROW 10
#define COL 20

int wordsCount(char *arr)
{   
    int i = 0;
    int count = 0;

    while(arr[i] != '\0')
    {
        if(arr[i++] == ' ')
        {
            count++;
        }
    }

    return count;
}

void reverse(char arr[])
{
    int count = wordsCount(arr) + 1;

    char reverse[ROW][COL] = {0};

    int j = 0;

    for(int i=0;i<count;i++)
    {
        int col = 0;

        while(arr[j] != ' ' && arr[j] != '\0')
        {
            reverse[i][col++] = arr[j++];
        }
        
        j++;
    }

    for(int i=count-1;i>=0;i--)
    {
        printf("%s ",reverse[i]);
    }
}

int main()
{
    char arr[1000];

    printf("Enter the string: ");
    scanf("%[^\n]",arr);

    reverse(arr);
    
    return 0;
}