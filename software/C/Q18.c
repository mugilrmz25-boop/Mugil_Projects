#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        if (!(i==0 || i==5 || i==6)){
            arr[i]=0;
        }else if(i==0){
            arr[i]=1;
        }else if(i==5){
            arr[i]=2;
        }else if(i==6){
            arr[i]=3;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}