#include<stdio.h>

void CharAndIntDiff();
int main()
{
    int a;
    float b;
    char c;
    printf("Size of int is %i bytes\n", sizeof(a));
    printf("Size of float is %i bytes\n", sizeof(b));
    printf("Size of char is %i bytes\n", sizeof(c));
    // CharAndIntDiff();
}
void CharAndIntDiff()
{
    char a = '3';
    char b = '2';

    int num1 = 1;
    int num2 = 2;

    printf("%c \n", a + b); // ascii 51 + 50 = e, a is 97, e = 101
    printf("%i \n", num1 + num2);

    //Learn about ASCII and if we store 3-2 in char and add them 
    //why we get e 
}