#include <stdio.h>

int main() {
    int age_in_years;
    int age_in_months;

    printf("Enter your age in years: ");
    scanf("%d", &age_in_years);

    age_in_months = age_in_years * 12;

    printf("Age in months: %d\n", age_in_months);



    return 0;
}