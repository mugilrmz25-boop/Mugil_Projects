#include <stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    int max2=-1e9,min2=1e9;
    for(int i=0;i<n;i++){
        if(a[i]>max2 && a[i]<max) max2=a[i];
        if(a[i]<min2 && a[i]>min) min2=a[i];
    }
    printf("largest and smallest no: %d %d",max,min);
    printf("\n");
    printf("second largest and smallest no: %d %d",max2,min2);
    return 0;
}