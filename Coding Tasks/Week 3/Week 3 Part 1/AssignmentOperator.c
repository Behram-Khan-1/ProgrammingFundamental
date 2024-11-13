#include<stdio.h>
int main()
{
    int a;     // Declare an integer variable a
    float b;   // Declare a float variable b

    b = 10;    // This is valid: assigning a float value to b
    a = b;     // This will cause a compile-time error: incompatible types
    printf("a = %f\n", a);
}