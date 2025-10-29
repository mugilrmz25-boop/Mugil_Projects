#include <stdio.h>
int main() {
    int n, a[100], r;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &r);
    for (int k = 0; k < r; k++) {
        int temp = a[0];
        for (int i = 0; i < n - 1; i++) a[i] = a[i + 1];
        a[n - 1] = temp;
    }
    printf("After left rotation: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}