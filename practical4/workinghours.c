//  (Compute the weekly hours for each employee) Suppose the weekly hours for all
// employees are stored in a two-dimensional array. Each row records an employee’s sevenday work hours with seven columns. For example, the following array stores the work hours 
// for eight employees. Write a program that displays employees and their total hours in 
// decreasing order of the total hours.


#include <stdio.h>

#define EMPLOYEES 8
#define DAYS 7

int main() {
    // Weekly hours for each employee
    int work_hours[EMPLOYEES][DAYS] = {
        {2, 4, 3, 4, 5, 8, 8},
        {7, 3, 4, 3, 3, 4, 4},
        {3, 3, 4, 3, 3, 2, 2},
        {9, 3, 4, 7, 3, 4, 1},
        {3, 5, 4, 3, 6, 3, 8},
        {3, 4, 4, 6, 3, 4, 4},
        {3, 7, 4, 8, 3, 8, 4},
        {6, 3, 5, 9, 2, 7, 9}
    };

    int total_hours[EMPLOYEES] = {0}; // Total hours for each employee
    int employee_order[EMPLOYEES];    // To keep track of employee indices

    // Calculate total hours for each employee
    for (int i = 0; i < EMPLOYEES; i++) {
        for (int j = 0; j < DAYS; j++) {
            total_hours[i] += work_hours[i][j];
        }
        employee_order[i] = i; // Initialize employee indices
    }

    // Sort employees by total hours in descending order
    for (int i = 0; i < EMPLOYEES - 1; i++) {
        for (int j = i + 1; j < EMPLOYEES; j++) {
            if (total_hours[employee_order[i]] < total_hours[employee_order[j]]) {
                // Swap indices
                int temp = employee_order[i];
                employee_order[i] = employee_order[j];
                employee_order[j] = temp;
            }
        }
    }

    // Display the results
    printf("Employee\tTotal Hours\n");
    for (int i = 0; i < EMPLOYEES; i++) {
        int emp = employee_order[i];
        printf("%d\t\t%d\n", emp, total_hours[emp]);
    }

    return 0;
}
