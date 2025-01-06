//  (Count vowels and consonants) Assume letters A, E, I, O, and U as the vowels.
// Write a program that prompts the user to enter a string and displays the number of vowels 
// and consonants in the string.


#include <stdio.h>


int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    char ch;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i]; 

        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <='z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++; 
            } else {
                consonants++;
            }
        }
    }

    printf("The number of vowels is %d\n", vowels);
    printf("The number of consonants is %d\n", consonants);

    return 0;
}
