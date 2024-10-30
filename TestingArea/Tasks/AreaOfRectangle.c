#include<stdio.h>

int main()
{
    /*
    Algorithm, Make flowchart of it urself.
        1. Given Length and Width as input
        2. Calculate Area of rectangle = length x width
        3. Display the output
    */
   int length, width = 2;
   
   printf("Enter length: \n");
   scanf("%d",&length);
   printf("length is: %i \n", length);
   int area = length * width;
   printf("Area of rectangle is %i", area);
}