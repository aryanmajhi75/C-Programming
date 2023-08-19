#include <stdio.h>

#define ROWS 3
#define COLS 4

// Function to add two matrices
void matrixAddition(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
//void matrixMultiplication(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            result[i][j] = 0;
//            for (int k = 0; k < COLS; k++) {
//                result[i][j] += mat1[i][k] * mat2[k][j];
//            }
//        }
//    }
//}

// Function to display a matrix
void displayMatrix(int mat[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrix1[ROWS][COLS] = {
        {1, 2, 3,10},
        {4, 5, 6,11},
        {7, 8, 9,12},
		
    };

    int matrix2[ROWS][COLS] = {
		{9, 8, 7,10},
        {6, 5, 4,11},
        {3, 2, 1,12}
    };

    int resultAddition[ROWS][COLS];
//    int resultMultiplication[ROWS][COLS];

    // Perform matrix addition
    matrixAddition(matrix1, matrix2, resultAddition);

    // Perform matrix multiplication
//    matrixMultiplication(matrix1, matrix2, resultMultiplication);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("Matrix 2:\n");
    displayMatrix(matrix2);

    printf("Matrix Addition:\n");
    displayMatrix(resultAddition);

//    printf("Matrix Multiplication:\n");
//    displayMatrix(resultMultiplication);

    return 0;
}

