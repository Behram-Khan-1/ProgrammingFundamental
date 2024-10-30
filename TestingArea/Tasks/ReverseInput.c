#include<stdio.h>

int main()
{
    int input = 1304652340; // if number starts with 0, its converted into octal in C

    int reverse = 0;
    
    while(input != 0)
    {
        reverse = ( input % 10 ) + reverse * 10 ; 
        input = input / 10; //1234

        printf("%d \n", reverse);
    }
}