#include <stdio.h>
int main(){
    int ch,r,h,b;
    float v;
    scanf("%d",&ch);
    if (!(ch==1 || ch==2)){
        printf("invalid choice");
    } else if (ch==1){
        scanf(" %d",&r);
        scanf(" %d",&h);
        if (!(r>0 && h>0)){
            printf("number should be positive");
            return 1;
        }else{
            v=(1.0/3.0)*3.1416*r*r*h;
            printf("%.2f",v);
        }    
    } else if (ch==2){
        scanf(" %d",&b);
        scanf(" %d",&h);
        if (!(b>0 && h>0)){
            printf("number should be positive");
            return 1;
        }else{
            v=b*h;
            printf("%.2f",v);
        }
    return 0;
}
}