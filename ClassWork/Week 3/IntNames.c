#include <stdio.h>

int main() {
    // Valid variable names
    int age;
    float average_marks;
    char character = 'h';

    // Invalid variable names (commented out)
    // int 2ndVariable; // Starts with a digit
    // int my-variable; // Contains a hyphen
    // int int; // Keyword

    // Assign values and print them
    age = 25;
        average_marks = 85.5;

    printf("Age: %d\n", age);
    printf("Average Marks: %.2f\n", average_marks);
    printf("Character is: %c\n", character);

    return 0;
}