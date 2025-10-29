#include <stdio.h>
int main(){
    int num,d,dup,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    dup=num;
    while (num>0){
        d=num%10;
        sum+=d;
        num/=10;
    }
    printf("sum of digits of %d is %d",dup,sum);
    return 0;
}