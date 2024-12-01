/* Electricity bill
Practical 2, Part 2
This is program outline for testing to see it compiles and runs

@author your name */

#include <stdio.h>

int main()
{
    /* code */
    // define variables for previous reading, current reading, day and month
    int previousMetre, currentMetre, day, month; // sample code

    // prompt user to enter previous reading, current reading, day and month separated
    // by a space or return;
    printf("Enter previous reading, current reading, day and month separated by a space or return, ");
    printf("and finish with a return:\n");

    // read previous metre, current metre, day and month
    scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month);

    // display previous metre, current metre, day and month
    printf("The previous meter, current metre, day and month entered: ");
    printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

    // Validation

    // current metre reading within range 0..9999
    // sample code below
    if (currentMetre < 0 || currentMetre > 9999)
        printf("Error: Current meter reading is out of range. Please try again! \n");

    // previous metre reading within range 0..9999
    if (previousMetre < 0 || previousMetre > 9999)
        printf("Error: previous meter reading is out of range. Please try again! \n");

    // previous not greater than present
    if (previousMetre > currentMetre)
        printf("Error: Previous reading is more than Current reading \n");

    // electricity used not more than 1000
    if (currentMetre - previousMetre > 1000)
        printf("Error: Electricity should not be more than 1000. Please try again! \n");

    // month in range 1..12
    if (month < 1 || month > 12)
        printf("Error: Month should be between 1 to 12. Please try again! \n");

    // days in month must be correct (Jan, March etc)
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31))
        printf("Error: Day should be between 1 to 31. Please try again!  \n");

    // days in month must be correct (Apr, June etc)
    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
        printf("Error: Day should be between 1 to 30. Please try again! \n");

    // days in month must be correct (Feb – assuming 29 days)
    if (month == 2 && (day < 1 || day > 29))
        printf("Error: Day should be between 1 to 29. Please try again! \n");

    return 0;
}