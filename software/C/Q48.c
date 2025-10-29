#include <stdio.h>

int main() {
    int n, count = 0, a[10] = {0};
    scanf("%d", &n);
    while (n > 0) {
        a[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] > 1) {
            printf("Your number has duplicate digits.\n");
            count = 1;
            break;
        }
    }
    if (count == 0) {
        printf("Your number has no duplicate digits.\n");
    }
    return 0;
}