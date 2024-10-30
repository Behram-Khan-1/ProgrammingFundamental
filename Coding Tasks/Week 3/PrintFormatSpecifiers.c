#include<stdio.h>

void main()
{
    int a = 20;
    int b = 30;
    printf("%i + %i \n", a,b); // can use %d or %i for integers

    float c = 20.2;
    float d = 30.5;
    //%f is for floats
    // printf("%f + %f \n", a,b); // 0.000 + 0.000 is output...
    printf("%f + %f \n", c,d);

    char e = 'a';
    char f = 'b';
    //%c is for characters
    printf("%c + %c \n", a,b); // outputs a and b's ASCII Code
    printf("%c + %c \n", c,d); // Null + null is output...
    //char gets values in Ascii format (0-255), float isnt int so cant be represented as ascii
    printf("%c + %c \n", e,f); // a + b is output...

    printf("my fav alphabets are %c , %c \n", e,f);

    printf("my fav alphabets are %c , %i \n", e, a );

    //Printing without variables
    printf("my fav number is %i \n", 20 );
    printf("my fav number is %i \n", 20+23 );
    printf("my fav number is %i \n", a+b );

    int firstNumber = 100;
    int secondNumber = 400;
    int sum = firstNumber + secondNumber;
    printf("sum of %i and %i is %i \n" , firstNumber,secondNumber,sum );

    char x = 'x' , y = 'y', z = 'z';
    printf("%c, %c, %c \n", x, y, z );

    char p,q,r,s;
    p = q = r = s = 'M';
    printf("%c, %c, %c, %c \n", p);
    printf("%c, %c, %c, %c \n", p,p,p,p);
}