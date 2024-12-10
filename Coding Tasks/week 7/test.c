#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars for the current row
        for (int x = 1; x <= 2 * i - 1; x++) {
            if (x == 1 || x == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}