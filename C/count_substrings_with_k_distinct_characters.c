#include<stdio.h>
#define n 10

int kd(char *str,int k)
{
    int i=0;
    int j=0;
    int cnt = 0;
    int count = 0;
    int arr[26] = {0};
    while(str[j] != '\0')
    {
        if(arr[str[j]-'a'] ==0)
        {
            cnt++;
        }
        arr[str[j]-'a'] ++;
        while(cnt>k)
        {
            arr[str[i]-'a']--;
            if(arr[str[i]-'a'] == 0)
            cnt--;
            i++;
        }
        count += j-i+1;
        j++;
    }

    return count;
}

int main()
{
    char str[n];
    int k;

    printf("Enter the string: ");
    scanf("%s",str);

    printf("Enter the k: ");
    scanf("%d",&k);

    printf("The entered string is: %s\n",str);
    printf("The exact k distinct characters is: %d",kd(str,k)-kd(str,k-1));

    return 0;
}