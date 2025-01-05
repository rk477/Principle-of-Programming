//  (Print distinct numbers) Write a program that reads in ten numbers and displays the 
// number of distinct numbers and the distinct numbers separated by exactly one space (i.e., if 
// a number appears multiple times, it is displayed only once). (Hint: Read a number and store 
// it to an array if it is new. If the number is already in the array, ignore it.) After the input, the 
// array contains the distinct numbers. Here is the sample run of the program:

#include <stdio.h>

int main() {

    int num[10];



    // Input the array elements
    printf("Enter 10 Elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // Print distinct elements
    printf("Distinct Elements: ");
    for (int i = 0; i < 10; i++) {
        int isDistinct = 1; // Assume the current element is distinct

        // Check if the current element has appeared before
        for (int j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                isDistinct = 0;
                break;
            }
        }

        // If it's distinct, print it
        if (isDistinct) {
            printf("%d ", num[i]);
        }
    }
    printf("\n");

    return 0;
}

