#include <stdio.h>
int main(){
    int a[10]={0},n=0;
    scanf("%d",&n);
    while(n>0){
        int b=0;
        b=n%10;
        a[b]++;
        n/=10;
    }for(int i=0;i<10;i++){
        printf("%d : %d",i,a[i]);
        printf("\n");
    }return 0;
}