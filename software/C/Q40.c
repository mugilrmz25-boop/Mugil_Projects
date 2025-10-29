#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j] && i!=j) count=1;
        }if(count==0) printf("%d ",a[i]);
    }
    return 0;
}
