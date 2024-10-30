#include <stdio.h>

int main() {
    int maxValue = 2147483647; // Maximum value of int
    printf("Max int value: %d\n", maxValue);
    
    // Attempting to exceed the max value
    int overflown = 2147483648;
    printf("%i", overflown);
    return 0;
}
