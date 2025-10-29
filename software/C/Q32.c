#include <stdio.h>
int main(){
    int n,sum=0,pro=1;
    scanf("%d",&n);
    int a[100]={0};
    for(int i=0;i<n;i++){
        int b=0;
        scanf("%d",&b);
        a[i]=b;
        sum+=b;
        pro*=b;
    }
    printf("%d %d",sum,pro);
    return 0;
}    