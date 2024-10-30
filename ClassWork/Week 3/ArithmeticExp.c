#include<stdio.h>

int main() {
    int Num1 = 10, Num2 = 5, Num3 = 2;

    // Example 1: Simple arithmetic operations
    int result1 = Num1 + Num2 * Num3; // Multiplication has higher precedence
    printf("Result 1: %d\n", result1);

    // Example 2: Using parentheses to change precedence
    int result2 = (Num1 + Num2) * Num3; // Addition in parentheses is evaluated first
    printf("Result 2: %d\n", result2);

    // Example 3: Combining multiple operations
    int result3 = (Num1 + Num2) * Num3 / (Num1 - Num2); // Parentheses and operator precedence
    printf("Result 3: %d\n", result3);

    int result4 = (4-(3*5))+2;
    printf("Result 4: %i \n", result4);
    return 0;
}