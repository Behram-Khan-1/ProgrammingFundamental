#include <stdio.h>

int main() {
    int age = 20;
    char Nationality = 'P';

    if (age >= 18) {
        if (Nationality == 'P') {
            printf("You are eligible to vote.\n");
        }
        else
        {
            printf("You are not a Pakistani citizen.\n");
        }
    }
    else
    {
        printf("You are not 18 years old yet.\n");
    }

    return 0;
}