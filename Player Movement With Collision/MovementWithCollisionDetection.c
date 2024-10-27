#include <stdio.h>
#include <stdlib.h> // for system("cls"), interact with terminal using cmd, passing cls to clear the terminal
#include <conio.h> // for _getch()
#include <time.h> // for random object positioning

int main() {
    // Constants for grid dimensions
    const int WIDTH = 10;
    const int HEIGHT = 5;

    // Player's starting position
    int x = WIDTH / 2, y = HEIGHT / 2;

    // Initial position of the object to be "eaten"
    srand(time(0)); // Seed for random positioning
    int objectX = rand() % WIDTH;
    int objectY = rand() % HEIGHT;

    // Variable to store player input
    char input;

    while (1) {
        // Clear the screen
        system("cls");

        // Check if player is at the object's position
        if (x == objectX && y == objectY) {
            printf("You collected the item!\n");
            // Respawn the object at a new random location
            objectX = rand() % WIDTH;
            objectY = rand() % HEIGHT;
        }

        // Draw the grid
        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (i == y && j == x) { // Player's position
                    printf("@");
                } else if (i == objectY && j == objectX) { // Object's position
                    printf("O"); // Represent object as 'O'
                } else {
                    printf("."); // Empty space
                }
            }
            printf("\n");
        }

        // Player input (WASD to move, Q to quit)
        input = _getch();
        if (input == 'w' && y > 0) y--;            // Move up
        else if (input == 's' && y < HEIGHT - 1) y++; // Move down
        else if (input == 'a' && x > 0) x--;            // Move left
        else if (input == 'd' && x < WIDTH - 1) x++;      // Move right
        else if (input == 'q') return 0;                // Quit game
    }

    return 0;
}
