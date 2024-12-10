#include <stdio.h>

int main()
{
    int x;
    for ( x = 0; x < 10; x++ ) {
        if ( x == 5 ) {
            break; // stop loop when x is 5
        }
        printf("\n%d\n", x);
    } //end for loop
        printf("Loop has ended");
    return 0;
}
