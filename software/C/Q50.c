#include <stdio.h>
int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int num;
    printf("Which element to delete: ");
    scanf("%d", &num);
    printf("Given array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;      
            i--;      
        }
    }

    printf("After deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
