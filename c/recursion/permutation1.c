#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int num[], int l, int r)
{
    if (l == r)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d ", num[i]);
        }
        printf("\n");
    }

    for (int i = l; i < r; i++)
    {
        swap(&num[l], &num[i]);
        print(num, l + 1, r);
        swap(&num[l], &num[i]);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }

    print(num, 0, n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", num[i]);
    // }

    return 0;
}