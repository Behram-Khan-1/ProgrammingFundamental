#include<stdio.h>

int main()
{
    //String is concatenation of characters
    //array of characters

    char fullName[20];
    printf("type your full name \n");
    scanf("%s",fullName);
    printf("%s", fullName);

    /*the scanf() function has some limitations: it considers space (whitespace, tabs, etc)
    as a terminating character, which means that it can only display a single word
    (even if you type many words).*/

    printf("\n\n");

    //fgets(fullName, sizeof(fullName), stdin); to take input of full line.

    char name[30] = {"asdfasdfasd"};
    for ( int i = 0; i < 30; i++)
    {
        printf("%c",name[i]);
    }

    printf("\n\n");

    //to find size of array simply divide size of array by datatype size
    int sizeOfArray = sizeof(name) / sizeof(char);
    printf("%i", sizeOfArray);  

    return 0;
}