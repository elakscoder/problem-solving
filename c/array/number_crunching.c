/*3) Form a number system with only 3 and 4. Find the nth number of the number system.
Eg.) The numbers are: 3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 433, 434, 443, 444, 3333, 3334, 3343, 3344, 3433, 3434, 3443, 3444 ….*/

#include <stdio.h>

void numcrunch(int n, int arr[])
{
    int len = 0;

    arr[0] = 3;
    arr[1] = 4;

    int i = 0;
    int j = 0;
    int index = 2;

    for (i = 0; index < n; i++)
    {
        for (j = 0; j < 2; j++)
        {

            arr[index++] = (arr[i] * 10) + arr[j];
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    numcrunch(n, arr);

    return 0;
}