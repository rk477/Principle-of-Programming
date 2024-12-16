//  (Find future dates) Write a program that prompts the user to enter an integer for today’s 
// day of the week (Sunday is 0, Monday is 1, …, and Saturday is 6). Also prompt the user to 
// enter the number of days after today for a future day and display the future day of the week.


#include <stdio.h>

int main() {
    int today, nextDay, futureDay;

    // Prompt user for today's day of the week
    printf("Enter today's day of the week (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ");
    scanf("%d", &today);

    // Prompt user for the number of days in the future
    printf("Enter the number of days after today: ");
    scanf("%d", &nextDay);

    // Calculate the future day
    futureDay = (today + nextDay) % 7;

    // Display the result
    printf("Today is ");
    switch (today) {
        case 0: printf("Sunday"); break;
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        default: printf("Invalid input!"); return 1;
    }

    printf(" and the future day is ");
    switch (futureDay) {
        case 0: printf("Sunday"); break;
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
    }
    printf(".\n");

    return 0;
}
