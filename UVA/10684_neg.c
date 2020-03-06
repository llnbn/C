#include <stdio.h>

int sol(int *arr, int in) {
    int i, k = 0, m = 0;
    for (i = 0; i < in; i++) {
        k += arr[i];
        if (arr[i] > k) k = arr[i];
        if (k < m && m == 0) m = k;
        else if (k > 0 && k > m) m = k;
        // else if (k < 0 && m > 0) k = 0;
    }
    return m;
}

int main() {
    int arr[10001];
    int i, in;
    while (scanf("%d", &in), in != 0) {
        for (i = 0; i < in; i++) {
            scanf("%d", &arr[i]);
        }
        int res = sol(arr, in);
        printf("%d\n", res);
    }
    return 0;
}
