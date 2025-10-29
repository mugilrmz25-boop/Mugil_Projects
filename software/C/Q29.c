#include <stdio.h>
int main(){
    int n=5,arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }int avg=sum/n;
    printf("%d",avg);
    return 0;
}