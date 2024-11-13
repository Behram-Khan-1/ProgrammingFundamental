#include <stdio.h>
int main()
{
 int Temperature = 0;
 printf("\n\t AC Control Unit \n");
 printf("\n1 \tTurn the AC on \n");
 printf("2\tTurn the AC off \n");
 printf("\n Enter your selection: ");
 scanf("%d", &Temperature);

 if (Temperature >= 80)
 printf("\nAC is now on\n");

 if (Temperature <= 20)
 printf("\nAC is now off\n");
}
/*Notice in my if structure that I’m comparing an integer variable to a number. 
This is acceptable—you can use variables in your if structures as long as you 
are comparing apples to apples and oranges to oranges. In other words, you can use a combination
of variables and other data in your expressions as long as you’re comparing
numbers to numbers and characters to characters. */
// do it with characters now.