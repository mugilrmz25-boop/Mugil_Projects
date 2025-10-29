#include <stdio.h>
int main(){
    int a[100]={0},n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int b=0;
        scanf("%d",&b);
        a[i]=b;
    }for(int j=0;j<n;j++){
        printf("%d ",a[j]*a[j]);
    }
    return 0;
}