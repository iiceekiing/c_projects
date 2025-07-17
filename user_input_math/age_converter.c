#include <stdio.h>

int main(void) {
    int age_years;
    int age_months, age_days, age_hours;

    // Ask user for age
    printf("Enter your age in years: ");
    scanf("%d", &age_years);

    // Perform conversions
    age_months = age_years * 12;
    age_days = age_years * 365;        // not accounting for leap years
    age_hours = age_days * 24;

    // Display results
    printf("\nYour age in months is: %d\n", age_months);
    printf("Your age in days is: %d\n", age_days);
    printf("Your age in hours is: %d\n", age_hours);

    return 0;
}

