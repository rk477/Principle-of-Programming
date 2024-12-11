// (Financial application: compound value) 
// Note: This is a challenging exercise. You are encouraged to form a group of two or three 
// Principles of Programming UFCFHS-30-1
// Page 6 of 6
// students to do the exercise as a team.
// Suppose you save $100 each month into a savings account with the annual interest rate 5%. 
// Thus, the monthly interest rate is 0.05/12 = 0.00417. After the first month, the value in the 
// account becomes
// 100 * (1 + 0.00417) = 100.417
// After the second month, the value in the account becomes
// (100 + 100.417) * (1 + 0.00417) = 201.252
// After the third month, the value in the account becomes
// (100 + 201.252) * (1 + 0.00417) = 302.507
// and so on.
// Write a program that prompts the user to enter a monthly saving amount and displays the 
// account value after the sixth month. (You will use a loop to simplify the code and display 
// the account value for any month in your practical session in Week 4.


#include <stdio.h>
#include <math.h>

int main() {
    double monthlySavings, accountValue = 0.0;
    // Annual interest rate divided by 12 months
    const double monthlyInterestRate = 0.05 / 12; 

    // Prompt the user to enter the monthly saving amount
    printf("Enter the monthly saving amount: ");
    scanf("%lf", &monthlySavings);

    // Calculate the account value for 6 months
    for (int month = 1; month <= 6; month++) {
        accountValue = (accountValue + monthlySavings) * (1 + monthlyInterestRate);
    }

    // Display the account value after the sixth month
    printf("After the sixth month, the account value is $%.2f\n", accountValue);

    return 0;
}
