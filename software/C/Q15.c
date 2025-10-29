#include <stdio.h>
int main(){
    int hr,fee;
    printf("Hours Parked:");
    scanf("%d",&hr);
    if (hr<=0){
        printf("Invalid choice. Hours should be positive.");
        return 0;
    } if (hr<=5){
        fee=hr*20;
        printf("Total parking fee for %d hour(s) is Rs. %d\n", hr, fee);
    } else{
        fee=100+(hr-5)*50;
        printf("Total parking fee for %d hour(s) is Rs. %d\n", hr, fee);
    }  
    return 0;
}