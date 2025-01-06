//  (Find the smallest element) Write a program that finds the smallest element in an array 
// of double values. Test program that prompts the user to enter ten numbers, finds the 
// minimum value, and displays the minimum value. Here is a sample run of the program:


#include <stdio.h>

int main() {
    double numbers[10]; 
    double smallest;         

    printf("Enter ten numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
    }

    smallest = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("The minimum number is: %.lf\n", smallest);

    return 0;
}
