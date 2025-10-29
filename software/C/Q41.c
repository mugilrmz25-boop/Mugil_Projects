/*Tic Tac Toe*/
#include <stdio.h>

#include <stdio.h>
void welcome(){
    printf("WELCOME TO TIC TAC TOE\n\n");
}


int main(){
    welcome();

    char a[3][3],b='x',result='_',op='a';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = '-';
        }
    }


    while(1){
    printf("who's starting(x/o):");
    scanf(" %c",&b);
    if(!(b=='x'||b=='o')){
        printf("invalid input\n");
        continue;
    }else break;
    }

    for(int i=0;i<9;i++){
        int r=0,c=0;
        printf("which row and column:");
        scanf("%d %d",&r,&c);

        if((r-1)<0 || (r-1)>2 || (c-1)<0 || (c-1)>2){
            printf("invalid input.try again\n");
            i--;
            continue;
        }
        
        if(a[r-1][c-1]!='-'){
            printf("cell already taken.try again\n");
            i--;
            continue;
        }
        a[r-1][c-1]=b;
        printf("\nCURRENT BOARD\n");

        for (int x = 0; x < 3; x++) {
            printf("  ---+---+---\n |");
            for (int y = 0; y < 3; y++) {
                printf(" %c |", a[x][y]);
            }printf("\n");
        }printf("  ---+---+---\n");
        
        for(int i=0;i<3;i++){
            if(a[i][0]!='-' && a[i][0]==a[i][1] && a[i][1]==a[i][2]){
                b=a[i][0];
                result='w';
            }
        }
        
        for(int i=0;i<3;i++){
            if(a[0][i]!='-' && a[0][i]==a[1][i] && a[1][i]==a[2][i]){
                b=a[0][i];
                result='w';
            }
        }
        
        if(a[0][0]!='-' && a[0][0]==a[1][1] && a[1][1]==a[2][2]){
            b=a[0][0];
            result='w';
        }
        
        if(a[2][0]!='-' && a[2][0]==a[1][1] && a[1][1]==a[0][2]){
            b=a[2][0];
            result='w';
        }

        if(result=='w'){
            printf("the winner is %c",b);
            printf("\n");
            break;
        }if(b=='x') b='o';
        else b='x';
    }

    if(result=='_'){
        printf("It's DRAW!!\n");
    }
    
}


