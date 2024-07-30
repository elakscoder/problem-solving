#include <stdio.h>
#define len 1000

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int check(int num, int ans[], int index)
{
    for (int i = 0; i < index; i++)
    {
        if (ans[i] == num)
        {
            return 0;
        }
    }

    return 1;
}

void gen(int arr[], int start, int end, int cnt, int target, int sum, int four[], int *index, int ans[])
{
    if (cnt == 4)
    {
        if (sum == target)
        {
            int num = 0;
            num = (four[0] * 1000) + (four[1] * 100) + (four[2] * 10) + (four[3] * 1);
            if (check(num, ans, *index))
            {
                printf("%04d\n", num);
                ans[*index] = num;
                (*index)++;
            }
        }
        return;
    }
    for (int i = start; i < end; i++)
    {
        four[cnt] = arr[i];
        gen(arr, i + 1, end, cnt + 1, target, sum + arr[i], four, index, ans);
    }
}

int main()
{
    int n;
    int cnt = 0;
    int target;
    int sum = 0;
    int four[4];
    int index = 0;
    int ans[len];

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &target);

    sort(n, arr);

    gen(arr, 0, n, cnt, target, sum, four, &index, ans);

    return 0;
}