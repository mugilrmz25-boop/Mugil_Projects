#include <stdio.h>
int main(){
    int a[30],max=0,min=0,t;
    for(int i=0;i<30;i++){
        printf("enter the marks of student %d:",i+1);
        scanf("%d",&a[i]);
        t+=a[i];
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    printf("the class average:%d",t/30);
    printf("highest marks:%d",max);
    printf("lowest marks:%d",min);
    return 0;
}