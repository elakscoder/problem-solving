#include <stdio.h>

void insertIntoResult(int res[], int *k, int *index, int value) {
    if (*k == 0 || res[*k - 1] != value) {
        res[(*k)++] = value;
    }
    (*index)++;
}

int Union(int a[], int b[], int res[], int n, int m) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            insertIntoResult(res, &k, &i, a[i]);
        } else if (b[j] < a[i]) {
            insertIntoResult(res, &k, &j, b[j]);
        } else {
            insertIntoResult(res, &k, &i, a[i]);
            j++;
        }
    }

    while (i < n) {
        insertIntoResult(res, &k, &i, a[i]);
    }

    while (j < m) {
        insertIntoResult(res, &k, &j, b[j]);
    }

    return k;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {2, 3, 4, 5 ,6 ,7 ,8 ,9 ,10};
    int res[10];
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    int k = Union(a, b, res, n, m);

    printf("Union of the arrays is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
