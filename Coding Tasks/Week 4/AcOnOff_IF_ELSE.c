#include <stdio.h>
int main()
{
    int Temperature = 0;
    printf("\n\t AC Control Unit \n");
    printf("\n    1 \tTurn the AC on \n");
    printf("Not 1\tTurn the AC off \n");
    printf("\n Enter your selection: ");
    scanf("%d", &Temperature);

    if (Temperature == 1) {
        printf("\nAC is now on\n");
    }
    else {
        printf("\nAC is now off\n");
    }

    return 0;
}
