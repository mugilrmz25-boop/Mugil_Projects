#include<stdio.h>
int main(){
    int a[10]={0};
    int c;
    long long b;
    printf("enter a number:");
    scanf("%lld",&b);
    while (b>0){
        c=b%10;
        a[c]+=1;
        b/=10;
    }
    for(int i=0;i<10;i++){
        if (a[i]>1){
            printf("yes\n");
            return 0;
        }
    }printf("no");
    return 0;
}