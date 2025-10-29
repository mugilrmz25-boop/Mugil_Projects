#include <stdio.h>
int main(){
    int ch;
    while (1){
        printf("Menu:\n");
        printf("1.Pizza\n");
        printf("2.Burger\n");
        printf("3.Exit\n");
        printf("Enter your choice:");
        scanf(" %d",&ch);
        if (!(ch==1 || ch==2 || ch==3)){
            printf("invalid choice\n");
        }else if (ch==1 || ch==2){
            printf("got it,Next?\n");
        }else if (ch==3)
            break;
    }
    printf("Thank you!!\n");
    return 0;
}