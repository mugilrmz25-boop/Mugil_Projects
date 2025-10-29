#include <stdio.h>
int main(){
    char gender;
    float salary,bonus;
    printf("enter the employee's salary:");
    scanf("%f",&salary);
    printf("enter the employee's gender(M/F):");
    scanf(" %c",&gender);

    if (!(salary>=1 && salary<=2147483647)){
        printf("Error: salary must be between 1 and 2^31 - 1.\n");
        return 1;
    } if (!(gender=='M' || gender=='F')) {
        printf("Gender should be 'M' for Male and 'F' for Female");
        return 1;
    } else if (salary<=0) {
        bonus=0;
        printf("Bonus:Rs.%0.2f", bonus);
    } else if (salary<25000) {
        bonus=5000;
        printf("Bonus:Rs.%0.2f", bonus);
    } else if (salary>=25000 && salary<=50000) {
        bonus=7500;
        printf("BonusRs.%0.2f",bonus);
    } else if (salary>50000) {
        if (gender=='M'){
            bonus=0.10*salary;
        } else if (gender=='F'){
            bonus=0.15*salary;
        }
        printf("BonusRs.%0.2f",bonus);
    }

    return 0;
}