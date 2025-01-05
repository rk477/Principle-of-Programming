//  (Occurrence of max numbers) Write a program that reads integers, finds the largest of 
// them, and counts its occurrences. Assume that the input ends with number 0. Suppose that 
// you entered 3 5 2 5 5 5 0; the program finds that the largest is 5 and the occurrence count for 
// 5 is 4.

#include <stdio.h>

int main() {
    int num, largest = 0, count = 0;

    printf("Enter integers (end with 0): \n");

    while (1) {
        scanf("%d", &num);

        // Exit loop if input is 0
        if (num == 0) {
            break;
        }

        if (num > largest) {
            // New maximum found
            largest = num;
            count = 1; // Reset count for new maximum
        } else if (num == largest) {
            // Increment count for the current maximum
            count++;
        }
    }

    if (count > 0) {
        printf("The largest number is %d and it occurs %d times.\n", largest, count);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
