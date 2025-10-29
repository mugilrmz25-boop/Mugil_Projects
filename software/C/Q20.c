#include <stdio.h>
int main(){
    int a[9]={34,56,54,32,67,89.90,32,21};
    printf("Array elements:\n");
    for(int i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("reversed order:\n");
    for(int i=8;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}