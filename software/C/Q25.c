#include <stdio.h>
int main(){
    int a[5],n,v;
    printf("no. of voters:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter candidate no(1-5):");
        scanf("%d",&v);
        if (v>=1 && v<=5) a[v-1]++;
        else printf("Invalid vote\n");
    }
    int w=0;
    for(int j=0;j<5;j++){
        if(a[j]>a[w]){
            w=j;
        }
    }printf("winner is candidate %d",w+1);
    return 0;
}