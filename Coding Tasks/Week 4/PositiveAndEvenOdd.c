#include <stdio.h>

int main() {
    int number = 7;

    if (number > 0) {
        if (number % 2 == 0) {
            printf("The number is positive and even.\n");
        }
        if(number % 2 != 0) {
            printf("The number is positive and odd.\n");
        }
    }

    return 0;
}