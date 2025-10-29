#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100]={0};
    for(int i=0;i<n;i++){
        int b=0;
        scanf("%d",&b);
        a[i]=b;
    }int max=a[0],min=a[0];
    for(int j=0;j<n;j++){
        if(a[j]>max) max=a[j];
        if(a[j]<min) min=a[j];
    }printf("%d",max-min);
    return 0;
}