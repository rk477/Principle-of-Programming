//  (Find the smallest element) Write a program that finds the smallest element in an array 
// of double values. Test program that prompts the user to enter ten numbers, finds the 
// minimum value, and displays the minimum value. Here is a sample run of the program:


#include <stdio.h>

int main() {
    double numbers[10]; // Array to store the numbers
    double smallest;         // Variable to store the minimum value

    // Input: Prompt user to enter ten numbers
    printf("Enter ten numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
    }

    // Assume the first number is the smallest
    smallest = numbers[0];

    // Find the smallest number
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Output the smallest number
    printf("The minimum number is: %.lf\n", smallest);

    return 0;
}
