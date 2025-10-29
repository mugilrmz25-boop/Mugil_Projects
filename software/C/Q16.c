#include <stdio.h>
int main(){
    int b,t=100;
    while (1){
        if (t>0){
            printf("We have %d tickets left.How many do you want?",t);
            scanf("%d",&b);
            if (b<=0){
                printf("ticket count should be positive.\n");
            }else if (b>t){
                printf("Sorry, we don't have %d tickets\n",b);
            }else{
                t-=b;
                printf("Thank you. %d tickets remaining.\n",t);
                if (t==0){
                    break;
            }
        }
        }
    }
    printf("Sorry, we have no more tickets.");
}