//           1 
//         2 1 
//       3 2 1 
//     4 3 2 1 
//   5 4 3 2 1 
// 6 5 4 3 2 1 



#include <stdio.h>

int main() {
    for (int i = 1; i <= 6; i++) { // Rows
        // Print leading spaces for alignment
        for (int j = 1; j <= 6 - i; j++) {
            printf("  ");
        }
        // Print numbers in reverse order
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n"); // Newline after each row
    }
    return 0;
}
