#include <stdio.h>
int main(){
    int num,rev=0,digit,org;
    printf("enter a number");
    scanf("%d",&num);
    org=num;

    while (num>0){
        digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }

    if (org==rev)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}