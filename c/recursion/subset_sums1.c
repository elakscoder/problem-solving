#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int ans[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (ans[j] > ans[j + 1])
            {
                swap(&ans[j], &ans[j + 1]);
            }
        }
    }
}

void sub2(int arr[], int start, int end, int size, int sum, int ans[], int *index)
{
    if (size >= 0)
    {
        printf("sum: %d\n", sum);
        ans[(*index)++] = sum;
    }
    for (int i = start; i < end; i++)
    {
        printf("%d add\n", arr[i]);
        sub2(arr, i + 1, end, size + 1, sum + arr[i], ans, index);
        printf("%d subtrac\n", arr[i]);
    }
}
int power(int num, int n)
{
    int ans = 1;

    for (int i = 0; i < n; i++)
    {
        ans = ans * 2;
    }

    return ans;
}
int main()
{
    int n;
    int index = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int ans[power(2, n)];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sub2(arr, 0, n, 0, 0, ans, &index);

    for (int i = 0; i < index; i++)
    {
        printf("%d ", ans[i]);
    }

    printf("\n");
    sort(ans, index);

    for (int i = 0; i < index; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}