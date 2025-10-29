#include <stdio.h>
#include <math.h>
int main(){
    float R,T,A,t;
    int P;
    char x;
    printf("enter principal amount:");
    scanf("%d",&P);
    printf("would you give time in (year(y)/month(m)):");
    scanf(" %c",&x);
    printf("now enter the time:");
    scanf(" %f",&t);
    printf("enter interest rate:");
    scanf(" %f",&R);
    
    if (!(P>=1 && P<=2147483647)){
        printf("Error: Principal amount must be between 1 and 2^31 - 1.\n");
        return 1;
    } if (!(R>=1.0 && R<=8.5)) {
        printf("Error: Interest rate must be between 1.0 and 8.5.");
        return 1;
    } if (!(x=='y' || x=='m')) {
        printf("Error: Time unit must be 'y' for years or 'm' for months");
        return 1;
    } if (!(t>0)) {
        printf("time should neither be zero nor negative");
        return 1;
    } if (x=='m') {
        T=t/12.0;
    } else{
        T=t;
    }

    A=P*(pow((1+(R/100)),T));
    printf("The Compound Interest is:%.2f", A);
   
    return 0;
}