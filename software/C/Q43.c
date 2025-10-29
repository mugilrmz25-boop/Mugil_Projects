#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // For getch() (Windows-specific, for input without Enter)

#define WIDTH 20
#define HEIGHT 10

int main() {
    char grid[HEIGHT][WIDTH];
    int snakeX[100], snakeY[100], length = 1, foodX, foodY, x = 5, y = 5, gameOver = 0;
    char direction = 'r'; // r: right, l: left, u: up, d: down

    // Initialize grid and snake
    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDTH; j++)
            grid[i][j] = ' ';
    snakeX[0] = x;
    snakeY[0] = y;
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;

    while (!gameOver) {
        // Clear screen (Windows-specific, use "clear" for Unix-like systems)
        system("cls");

        // Update snake position
        if (_kbhit()) {
            char ch = _getch();
            if (ch == 'a' && direction != 'r') direction = 'l';
            if (ch == 'd' && direction != 'l') direction = 'r';
            if (ch == 'w' && direction != 'd') direction = 'u';
            if (ch == 's' && direction != 'u') direction = 'd';
        }

        // Move snake
        for (int i = length - 1; i > 0; i--) {
            snakeX[i] = snakeX[i - 1];
            snakeY[i] = snakeY[i - 1];
        }
        if (direction == 'r') x++;
        else if (direction == 'l') x--;
        else if (direction == 'u') y--;
        else if (direction == 'd') y++;
        snakeX[0] = x;
        snakeY[0] = y;

        // Check collision with walls
        if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) gameOver = 1;

        // Check if food is eaten
        if (x == foodX && y == foodY) {
            length++;
            foodX = rand() % WIDTH;
            foodY = rand() % HEIGHT;
        }

        // Update grid
        for (int i = 0; i < HEIGHT; i++)
            for (int j = 0; j < WIDTH; j++)
                grid[i][j] = ' ';
        for (int i = 0; i < length; i++)
            grid[snakeY[i]][snakeX[i]] = 'S';
        grid[foodY][foodX] = 'F';

        // Print grid
        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++)
                printf("%c ", grid[i][j]);
            printf("\n");
        }

        // Delay for visibility
        for (int i = 0; i < 10000000; i++); // Simple delay
    }
    printf("Game Over! Snake length: %d\n", length);
    return 0;
}