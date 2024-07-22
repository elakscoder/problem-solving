#include<stdio.h>

int main()
{
    int n;

     printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int var = 0;
    printf("\n");
    for(int i=0;i<n;i++)
    {
        var = 0;
        for(int j=i;j<n;j++)
        {
            var = (var*10) + arr[j];
            printf("%d\n",var);
        }
    }

    return 0;
}