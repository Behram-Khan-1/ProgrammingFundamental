#include<stdio.h>

void sum(int * a,int * b);

int main()
{
    int firstNumber = 5;
    int secondNumber = 3;
    
    int *pFirst = &firstNumber;
    int *pSecond = &secondNumber;


    printf("%d \n", *pFirst); //values
    printf("%d \n", *pSecond);

    printf("%p \n", pFirst); //address
    printf("%p \n", pSecond);

    printf("%d \n", firstNumber);//values
    printf("%d \n", secondNumber);

    printf("%p \n", &firstNumber);//address
    printf("%p \n", &secondNumber);
    
}


void sum(int * a,int * b)
{
    printf("%d \n", a);
    printf("%d \n", b);
    a = a+2;
    b = a+3;
}
