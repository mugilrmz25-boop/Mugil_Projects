#include <stdio.h>
int main(){
    int n,a[10]={0};
    scanf("%d",&n);
    while(n>0){
        a[n%10]+=1;
        n/=10;
    }
    int max=0,dig=0;
    for(int i=0;i<10;i++){
        if(a[i]>max) max=a[i];
    }
    printf("Most frequent digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (a[i] == max) {
            printf("%d ", i);
        }
    }

    return 0;
}