#include <stdio.h>
#define len 1000

void comb(int n, int start, int k, int subseq[], int size, int sum)
{
    if ((size == k) && (sum == n))
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d ", subseq[i]);
        }
        printf("\n");
        return;
    }
    if (sum > n)
    {
        return;
    }

    for (int i = start; i < n; i++)
    {
        subseq[size] = i;
        comb(n, i + 1, k, subseq, size + 1, sum + i);
    }
}

int main()
{
    int n;
    int k;
    int subseq[len];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    comb(n, 1, k, subseq, 0, 0);

    return 0;
}