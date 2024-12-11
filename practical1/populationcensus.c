//  (Population projection) The U.S. Census Bureau projects population based on the
// following assumptions:
// • One birth every 7 seconds
// • One death every 13 seconds
// • One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the
// current population is 312,032,486 and one year has 365 days. Hint: In Java, if two integers 
// perform division, the result is an integer. The fractional part is truncated. For example, 5 / 4 
// is 1 (not 1.25) and 10 / 4 is 2 (not 2.5). To get an accurate result with the fractional part, one 
// of the values involved in the division must be a number with a decimal point. For example, 
// 5.0 / 4 is 1.25 and 10 / 4.0 is 2.5


#include <stdio.h>

int main() {
    // Constants
    const int CURRENT_POPULATION = 312032486;
    const int SECONDS_IN_A_YEAR = 365 * 24 * 60 * 60;

    // Population changes per year
    int births_per_year = SECONDS_IN_A_YEAR / 7;
    int deaths_per_year = SECONDS_IN_A_YEAR / 13;
    int immigrants_per_year = SECONDS_IN_A_YEAR / 45;

    // Calculate net population change per year
    int net_change_per_year = births_per_year + immigrants_per_year - deaths_per_year ;

    // Display population for the next five years
    int population = CURRENT_POPULATION;
    printf("Year\tPopulation\n");
    for (int year = 1; year <= 5; year++) {
        population += net_change_per_year; 
        printf("%d\t%d\n", year, population);
    }

    return 0;
}
