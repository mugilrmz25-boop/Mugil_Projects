#include <stdio.h>
#include <string.h>
int main(){
    char name[50];
    int rn,tc,ca;
    float P;
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter roll no:");
    scanf(" %d",&rn);
    printf("Enter total no. of classes:");
    scanf(" %d",&tc);
    printf("Enter class attended:");
    scanf(" %d",&ca);

    if (strlen(name)==0){
        printf("Name cannot be empty.");
        return 1;
    } else if (tc<0){
        printf("Invalid total number of class");
        return 1;
    } else if (ca<0){
        printf("Invalid number of class attended");
        return 1;
    } else if (ca<0 || tc<ca){
        printf("attended class should be between 0 and total class");
        return 1;
    }

    P=(ca/tc)*100;
    printf("Attendance Percentage: %.2f %",P);
    return 0;
}