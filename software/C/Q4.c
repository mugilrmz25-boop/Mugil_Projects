#include <stdio.h>

int main() {
    int C,S,P;
    printf("enter the cost price:");
    scanf("%d",&C);
    printf("enter the selling price:");
    scanf(" %d",&S);
    
if (!(C>=0))
{
    printf("Error: Cost price (C) cannot be negative.");
} else if (!(S>=0)){
    printf("Error: Selling price (S) cannot be negative.");
}else{
    P=S-C;
    printf("P=%d\n", P);
    if (P>0){
        printf("Result: Profit");
    } else if (P<0){   
        printf("Result:Loss");
    } else{
        printf("Result: Break-even");
    }
    }
    return 0;
}
