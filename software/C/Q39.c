#include <stdio.h>
int main(){
    int n,a[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("%d",a[0]+a[1]+a[n-1]+a[n-2]);
    return 0;
}