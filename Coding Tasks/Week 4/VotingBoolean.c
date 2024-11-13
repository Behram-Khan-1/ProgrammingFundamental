#include <stdio.h>

int main() {
    int age = 12;
    char Nationality = 'P';

    if (age >= 18 && Nationality == 'P')
    {
            printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not Eligible to vote\n");
    }

    return 0;
}