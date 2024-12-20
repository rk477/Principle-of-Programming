//  (Sort three numbers) Write a function with the following function declaration to 
// display three numbers in increasing order: 
// int DisplaySortedNumbers(double num1, double num2, double 
// Principles of Programming UFCFHS-30-1
// Page 10 of 10
// num3);
// Now write a test program that prompts the user to enter three numbers and invokes 
// the function to display them in increasing order.


#include <stdio.h>

// Function to display three numbers in increasing order
void DisplaySortedNumbers(double num1, double num2, double num3) {
    double temp;

    // Sort the numbers using simple comparisons
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;  
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Display the numbers in increasing order
    printf("The numbers in increasing order are: %.2f, %.2f, %.2f\n", num1, num2, num3);
}

int main() {
    double num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Call the function to display the sorted numbers
    DisplaySortedNumbers(num1, num2, num3);

    return 0;
}
