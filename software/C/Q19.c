#include <stdio.h>
int main(){
    int arr[10]={[0]=1,[5]=2,[6]=3};
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}