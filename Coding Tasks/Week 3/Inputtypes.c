#include <stdio.h>

int main ()
{
    //Enter character and output it
    // char nameInitial;
    // printf("Write your initials \n");

    // scanf("%c", &nameInitial);
    // printf("\n");

    int numberOne;
    char numberOneFirstLetter;
    
    printf("Enter a number and its first letter \n");

    scanf("%i%c", &numberOne, &numberOneFirstLetter);
    // scanf("%i%c", &numberOne,&numberOneFirstLetter); if no space bw i and c then it if we enter 3 p it will result 3,space. p wont be stored in numberonefirstletter.
    // scanf("%i %c ", &numberOne,&numberOneFirstLetter); //if space after last input, it will ask for 1 more empty input 

    printf(" %i,%c",numberOne,numberOneFirstLetter);


}