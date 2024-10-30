#include <conio.h>
#include <stdio.h>

int main() {
    int ch;
    printf("Press any key to continue...");
    ch = getch(); // waits for a key press, doesn't display it
    printf("\nYou pressed: %c\n", ch);
    return 0;
}
