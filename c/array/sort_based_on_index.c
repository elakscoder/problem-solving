#include <stdio.h>

void getArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sortalter(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j % 2) && (j+2<n)&& arr[j] > arr[j + 2])
            {
                swap(&arr[j], &arr[j + 2]);
            }
            else
            {
                if ((j%2==0)&& (j+2<n) &&(arr[j] < arr[j + 2]))
                {
                    swap(&arr[j], &arr[j + 2]);
                }
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    getArray(n, arr);

    printf("The input array is: \n");
    printArray(n, arr);

    sortalter(n, arr);

    printf("The sorted array is: \n");
    printArray(n, arr);

    return 0;
}