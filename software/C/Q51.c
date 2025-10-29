#include <stdio.h>
int main(){
    int n,a[100],pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&pos);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    for(int i=pos-1;i<n-1;i++) a[i]=a[i+1];
    n--;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}