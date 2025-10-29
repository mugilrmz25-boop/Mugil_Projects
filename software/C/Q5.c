#include <stdio.h>
int main(){
    int age,g;
    char name;
    printf("Name of the person:");
    scanf("%s",&name);
    printf("Age of the person:");
    scanf(" %d",&age);
    printf("Gender of the person:");
    scanf(" %d",&g);
    
if (!(age>0 && age>=18 && g==1 && g==2)){
    
}
    return 0;
}