//  (Sum elements row by row) Write a program that returns the sum of all the
// elements in a specified column in a matrix.


#include <stdio.h>

void rows_addition(int num[][10], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        int row_sum = 0;
        for (j = 0; j < cols; j++) {
            row_sum += num[i][j];
        }
        printf("Sum of elements in row %d: %d\n", i + 1, row_sum);
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

    printf("\nCalculating row-by-row addition...\n");
    rows_addition(num, rows, cols);

    return 0;
}


