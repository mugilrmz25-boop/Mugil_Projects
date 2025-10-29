#include <stdio.h>
int main(){
    int bank[20]={0},m=0,n;
    char c;
    for(int i=0;i<20;i++){
        printf("want to deposit(d) or withdraw(w):");
        scanf(" %c",&c);
        if (c=='d'){
            printf("amount to deposit:");
            scanf("%d",&n);
            m+=n;
            bank[i]=n;
        }else if(c=='w'){
            printf("amount to withdraw:");
            scanf("%d",&n);
            m-=n;
            bank[i]=-n;
        }else printf("Invalid\n");
    }
    int max=0;
    for(int j=0;j<20;j++){
        if (bank[j]<0){
            if (bank[j]<bank[max]) max=j;
        }
    }printf("the final balance: %d",m);
    printf("\nthe largest sigle withdrawal: %d",-bank[max]);
    return 0;
}