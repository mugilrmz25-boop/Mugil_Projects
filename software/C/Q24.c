#include <stdio.h>
int main(){
    int a[7],h=0,c=0;
    for (int i=0;i<7;i++){
        printf("day %d temperature:",i+1);
        scanf("%d",a[i]);
        if (a[i]>a[h]) h=i;
        if (a[i]<a[c]) c=i;
    }
    return 0;
}