////Write a program in c language to find the highest number from multi-dimentional array using function
#include <stdio.h>

int findHighestNumber(int rows,int cols,int arr[][100]) {
    int highest = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > highest) {
                highest = arr[i][j];
            }
        }
    }

    return highest;
}

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[100][100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int highestNumber = findHighestNumber(rows,cols,arr);
    printf("The highest number in the array is: %d\n", highestNumber);

    return 0;
}
//int findHighest(int arr[][100], int rows, int cols) {
//    int highest = arr[0][0];
//    int i,j;
//    for (i = 0; i < rows; i++) {
//        for (j = 0; j < cols; j++) {
//            if (arr[i][j] > highest) {
//                highest = arr[i][j];
//            }
//        }
//    }
//   
//    return highest;
//}
//
//int main() {
//    int n,i,j;
//    printf("Enter the number of rows and columns (n x n): ");
//    scanf("%d", &n);
//   
//    if (n <= 0) {
//        printf("Invalid input. Please enter a positive integer.\n");
//        return 1;
//    }
//   
//    int arr[100][100];
//   
//    printf("Enter the elements of the %dx%d array:\n", n, n);
//   
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//   
//    int highest = findHighest(arr, n, n);
//   
//    printf("The highest number in the array is: %d\n", highest);
//   
//    return 0;
//}
