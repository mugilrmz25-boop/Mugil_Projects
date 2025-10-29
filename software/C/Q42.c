/*Upadated Tic Tac Toe*/
#include <stdio.h>

void welcome() {
    printf("WELCOME TO TIC TAC TOE\n\n");
}

void scorecard(int X, int O) {
    printf("+-------+-------+\n");
    printf("|   X   |   O   |\n");
    printf("+-------+-------+\n");
    printf("|   %d   |   %d   |\n", X, O);
    printf("+-------+-------+\n");
}

char playGame() {
    char a[3][3], b = 'x', result = '_';

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = '-';

    while (1) {
        printf("Which one you gonna pick (x/o): ");
        scanf(" %c", &b);
        if (b == 'x' || b == 'o') break;
        printf("Invalid input. Try again.\n");
    }

    for (int i = 0; i < 9; i++) {
        int r = 0, c = 0;
        printf("Which row and column: ");
        scanf("%d %d", &r, &c);

        if (r < 1 || r > 3 || c < 1 || c > 3 || a[r - 1][c - 1] != '-') {
            printf("Invalid or taken cell. Try again.\n");
            i--;
            continue;
        }

        a[r - 1][c - 1] = b;

        printf("\nCURRENT BOARD\n");
        for (int x = 0; x < 3; x++) {
            printf(" +---+---+---+\n |");
            for (int y = 0; y < 3; y++) {
                printf(" %c |", a[x][y]);
            }
            printf("\n");
        }
        printf(" +---+---+---+\n");

        for (int i = 0; i < 3; i++) {
            if (a[i][0] != '-' && a[i][0] == a[i][1] && a[i][1] == a[i][2]) result = 'w';
            if (a[0][i] != '-' && a[0][i] == a[1][i] && a[1][i] == a[2][i]) result = 'w';
        }
        if (a[0][0] != '-' && a[0][0] == a[1][1] && a[1][1] == a[2][2]) result = 'w';
        if (a[2][0] != '-' && a[2][0] == a[1][1] && a[1][1] == a[0][2]) result = 'w';

        if (result == 'w') {
            printf("The winner is %c\n", b);
            return b;
        }

        b = (b == 'x') ? 'o' : 'x';
    }

    printf("It's a DRAW!!\n");
    return '_';
}

int main() {
    welcome();


    int X = 0, O = 0;
    char op = 'y';

    while (op == 'y') {
        char winner = playGame();
        if (winner == 'x') X++;
        else if (winner == 'o') O++;

        scorecard(X, O);

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &op);
        while (!(op == 'y' || op == 'n')) {
            printf("Invalid input. Try again (y/n): ");
            scanf(" %c", &op);
        }
    }

    printf("Thanks for playing! Hope you had fun!\n");
    return 0;
}