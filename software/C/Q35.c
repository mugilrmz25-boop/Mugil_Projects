#include <stdio.h>
int main(){
    int n,c,count=0;
    scanf("%d",&n);
    int a[100]={0};
    for(int i=0;i<n;i++){
        int b=0;
        scanf("%d",&b);
        a[i]=b;
    }scanf("%d",&c);
    for(int j=0;j<n;j++){
        if(a[j]%c==0) count++;
    }printf("%d",count);
    return 0;
}