#include <stdio.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b;
    printf("which one you're looking for: ");
    scanf("%d",&b);
    int j=-1;
    for(int i=0;i<n;i++){
        if(b==a[i]){
            j=i;
            printf("%d is in %dth position.",b,j+1);
            break;
        }
    }if(j==-1) printf("%d is not available.",b);
    return 0;
}