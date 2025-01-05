//  (Sum elements column by column) Write a program that returns the sum of all the
// elements in a specified column in a matrix.


#include <stdio.h>

void columns_addition(int num[][10], int rows, int cols) {
    int i, j;

    for (j = 0; j < cols; j++) {
        int col_sum = 0;
        for (i = 0; i < rows; i++) {
            col_sum += num[i][j];
        }
        printf("Sum of elements in column %d: %d\n", j + 1, col_sum);
    }
}

int main() {
    int rows, cols;
    int i, j;
    int num[10][10]; // 2D array to store matrix elements

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }

    printf("\nCalculating column-by-column addition...\n");
    columns_addition(num, rows, cols);

    return 0;
}


