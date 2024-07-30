#include <stdio.h>

void print(int n)
{
    int sum = 0;

    for (int i = n; i > 0; i--)
    {
        int j = n - i;
        sum = i;
        printf("%d ", sum);
        if (sum < j)
        {
            j = sum;
        }
        while (j > 0)
        {
            sum += j;
            if (sum <= n)
            {
                printf("%d ", j);
            }
            else if (sum > n)
            {
                if ((sum - j) < n)
                {
                    printf("%d ", n - (sum - j));
                }
                j--;
                if (j > 0)
                {
                    sum = i;
                    printf("\n%d ", sum);
                }
            }
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    print(n);

    return 0;
}