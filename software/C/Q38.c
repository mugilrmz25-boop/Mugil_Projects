#include <stdio.h>
int main() {
    int n, pos;
    scanf("%d", &n);   
    int a[100];       
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }scanf("%d", &pos);  
    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
    }else{
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
