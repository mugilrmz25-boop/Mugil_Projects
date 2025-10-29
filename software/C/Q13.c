#include <stdio.h>
int main(){
    int num,dup,fact=1,i;
    printf("enter a number:");
    scanf("%d",&num);
    dup=num;
    i=num;
    while (i>0){
        fact*=i;
        i--;
    }
    printf("%d!=%d",num,fact);
    return 0;
}