#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int sum, difference, product, quotient, remainder;

    // Arithmetic operations
    sum = a + b; //Expression
    difference = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

    printf("Remainder: %d\n", remainder);

    return 0;
}