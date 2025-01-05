// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1



#include <stdio.h>

int main() {
    for (int i = 6; i >= 1; i--) { // Rows
        for (int j = 1; j <= i; j++) { // Columns
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
