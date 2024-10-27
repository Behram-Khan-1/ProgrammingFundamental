#include <stdio.h>
#include <stdlib.h> //for system("cls"), interact with terminal using cmd, passing cls to clear the terminal
#include <conio.h> // for _getch()
// https://www.geeksforgeeks.org/getch-function-in-c-with-examples/


int main() {
    int const WIDTH = 10; int const HEIGHT = 5;
    int x = WIDTH / 2, y = HEIGHT / 2; // Initial position of the player
    //divided by 2 to get center of screen
    printf("%i %i", x, y); // first initial position of the player

    char input;
    while (1) {
        // Clear the screen, comment to display x and y values in terminal
        system("cls");
        // Uncomment to display updated x and y values in terminal
        // printf("%i %i \n", x, y); // updated x and y values

        // Draw the box and character
        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (i == y && j == x) { // display the player where the i'th value = y and j'th value = x
                    printf("@"); // the player character is represented using @
                } else {
                    printf("."); // Empty space in the box, the movement area is represented using dots.
                }
            }
            printf("\n");
        }

        // Get player input (WASD)
        input = _getch();
        if (input == 'w' && y > 0) y--;        // Move up
        else if (input == 's' && y < HEIGHT-1) y++; // Move down
        else if (input == 'a' && x > 0) x--;        // Move left
        else if (input == 'd' && x < WIDTH-1) x++;  // Move right
        else if (input == 'q') return 1;            // Quit the game

    }

    return 0;
}

//Press Q to exit the game
