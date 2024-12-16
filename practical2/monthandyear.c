//  (Find the number of days in a month) Write a program that prompts the user to enter the 
// month and year and displays the number of days in the month. For example, if the user 
// entered month 2 and year 2012, the program should display that February 2012 had 29 days. 
// If the user entered month 3 and year 2015, the program should display that March 2015 had 
// 31 days.



#include <stdio.h>

int days_in_month(int month, int year) {
    // Months with 31 days
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        return 31;
    }
    // Months with 30 days
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    // February - check for leap year
    else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29; // Leap year
        } else {
            return 28;
        }
    }
    // Invalid month
    return -1;
}

int main() {
    int month, year, days;

    // Input for month and year
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    // Get the number of days in the month
    days = days_in_month(month, year);

    // Check if input is valid
    if (days == -1) {
        printf("Invalid month entered. Please enter a value between 1 and 12.\n");
    } else {
        // Map month numbers to names
        const char *month_names[] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };
        printf("%s %d has %d days.\n", month_names[month - 1], year, days);
    }

    return 0;
}
