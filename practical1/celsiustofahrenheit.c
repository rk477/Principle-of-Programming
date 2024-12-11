//  (Convert Celsius to Fahrenheit) Write a program that reads a Celsius degree in a double 
// value from the console, then converts it to Fahrenheit and displays the result. The formula 
// for the conversion is as follows: fahrenheit = (9 / 5) * celsius + 32.
// Hint: In Java, 9 / 5 is 1, but 9.0 / 5 is 1.8.
// Here is a sample run



#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Prompt the user to enter a Celsius degree
    printf("Enter a degree in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Display the result
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
