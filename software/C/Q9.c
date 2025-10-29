#include <stdio.h>
int main(){
    int x,y,z,max;
    printf("enter three numbers:");
    scanf("%d %d %d",&x, &y, &z);
    max=x;
    if (y>max){
        max=y;
    } if (z>max){
        max=z;
    }printf("The largest number is: %d\n", max);
    return 0;
}