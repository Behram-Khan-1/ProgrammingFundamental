#include <stdio.h>

#define PLAYER_X 'X'
#define PLAYER_O 'O'
#define EMPTY ' ' // can use variables instead of define in code.

void printBoard(char board[9]) {
    printf("  0 | 1 | 2\n");
    printf("----|---|----\n");
    printf("  %c | %c | %c\n", board[0], board[1], board[2]);
    printf("----|---|----\n");
    printf("  %c | %c | %c\n", board[3], board[4], board[5]);
    printf("----|---|----\n");
    printf("  %c | %c | %c\n", board[6], board[7], board[8]);
    printf("\n");
}

int checkWin(char board[9]) {
    // Check rows, columns, and diagonals for a win
        //Will simplify this by removing the array checking and just doing it like if arr[0]== arr[1] ==arr[2]
        //Will simplify this by removing the array checking and just doing it like if arr[3]== arr[4] ==arr[5]
        //Will simplify this by removing the array checking and just doing it like if arr[6]== arr[7] ==arr[8] and for vertical too
    for (int i = 0; i < 3; i++) {
        if ((board[i * 3] == board[i * 3 + 1] && board[i * 3 + 1] == board[i * 3 + 2] && board[i * 3] != EMPTY) || 
            (board[i] == board[i + 3] && board[i + 3] == board[i + 6] && board[i] != EMPTY)) {
            return 1; // Win
        }
    }
    if ((board[0] == board[4] && board[4] == board[8] && board[0] != EMPTY) || //Diagonal checks for win
        (board[2] == board[4] && board[4] == board[6] && board[2] != EMPTY)) {
        return 1; // Win
    }
    return 0; // No win
}

int main() {
    char board[9] = {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY};
    char currentPlayer = PLAYER_X;
    int move;

    for (int turns = 0; turns < 9; turns++) {
        printBoard(board);
        printf("Player %c, enter your move (0-8): ", currentPlayer);
        scanf("%d", &move);

        // Check for valid input
        if (move < 0 || move >= 9 || board[move] != EMPTY) {
            printf("Invalid move! Try again.\n");
            turns--; // Don't count this turn, go back to previous loop as it was invalid input
            continue;
        }

        // Place the player's mark on the board
        board[move] = currentPlayer;

        // Check for a win
        if (checkWin(board)) {
            printBoard(board);
            printf("Player %c wins!\n", currentPlayer);
            return 0; // Exit the game
        }

        // Switch players
        currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
    }

    // If we reach here, it's a draw
    printBoard(board);
    printf("It's a draw!\n");
    return 0;
}
