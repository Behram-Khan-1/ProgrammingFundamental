#include<stdio.h>

int main()
{
    float f1 = 35e3; //scientific numbers using e
    double d1 = 12E4;
    float f2 = 123445677.123123123123123;
    double d2 = 41234.4324324234234234;

    printf("%f\n", f1);
    printf("%lf\n", d1);   

    printf("%.2f\n", f2); // . number tells how many decimal points to print
    printf("%.20lf", d2);  // by default set to 6 decimal points

    int one = 5;
    int two = 12;
    // float answer = one / two; // cant do this, answer will be 2.000
    // typecast one to float
    float answer = (float) two / one; 
    printf(" \n %f", answer);
}