#include <stdio.h>
int main(){
    int n,a[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int b=0;
        scanf("%d",&b);
        a[i]=b;
    }for(int j=0;j<n;j++){
        if(a[j]<0) printf("%d ",a[j]);
    }
    return 0;
}