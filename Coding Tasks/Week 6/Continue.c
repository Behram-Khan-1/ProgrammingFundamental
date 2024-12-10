#include <stdio.h>

int main() {
    int x = 0;

    while (x < 10) {
        if (x == 5) {
            x++;
            continue; // skip the rest of the loop iteration when x is 5
        }
        printf("%d\n", x);
        x++;
    }

    return 0;
}
