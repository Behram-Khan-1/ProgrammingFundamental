#include <stdio.h>

int main() {
    int birthDay, birthMonth;
    int currentDay, currentMonth;

    printf("\n\t****************************************\n");
    printf("\t* Welcome to the Birthday Countdown App! *\n");
    printf("\t****************************************\n\n");
    printf("This app will help you find out how many days are left until your next birthday!\n\n");

    // Get current date from user
    printf("Enter the current month (1-12): ");
    scanf("%d", &currentMonth);
    printf("Enter the current day (1-31): ");
    scanf("%d", &currentDay);

    if (currentMonth <= 1 && currentMonth >= 12) {
        printf("Invalid month! Please enter a number between 1 and 12.\n");
        return 1; // Exit the program if input is invalid
        //We havent studied return yet so dont think over this alot...
    }
    if (currentDay <= 1 && currentDay >= 31) {
        printf("Invalid day! Please enter a number between 1 and 31.\n");
        return 1; // Exit the program if input is invalid
        //We havent studied return yet so dont think over this alot...
    }

    // Get birth date from user
    printf("Enter your birth month (1-12): ");
    scanf("%d", &birthMonth);
    printf("Enter your birth day (1-31): ");
    scanf("%d", &birthDay);

    if (currentDay < 1 || currentDay > 31) {
        printf("Invalid day! Please enter a number between 1 and 31.\n");
        return 1; // Exit the program if input is invalid
        //We havent studied return yet so dont think over this alot...
    }
    if (birthDay < 1 || birthDay > 31) {
        printf("Invalid birth day! Please enter a number between 1 and 31.\n");
        return 1; // Exit the program if input is invalid
        //We havent studied return yet so dont think over this alot...
    }

    int daysRemaining = 0;

    if (birthMonth == currentMonth) {
        daysRemaining = birthDay - currentDay;
    } else if (birthMonth > currentMonth) {
        daysRemaining = (birthMonth - currentMonth) * 30 + (birthDay - currentDay);
    } else {
        daysRemaining = (12 - currentMonth + birthMonth) * 30 + (birthDay - currentDay);
    }
    printf("%d days remaining\n ", daysRemaining);

    if(daysRemaining == 0)
    {
        printf("\n Happy Birthday\n");
    }
    else if (daysRemaining < 30 && daysRemaining > 0) {
        printf("Your birthday is just around the corner!\n");
    } 
    else if (daysRemaining >= 30 && daysRemaining <= 180) {
        printf("Your birthday is a few months away.\n");
    } 
    else {
        printf("Your birthday is in almost a year!\n");
    }

    return 0;
}
