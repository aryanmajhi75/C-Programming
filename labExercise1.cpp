#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

// Function to sort an array in ascending order using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[25];
    int numCount = 0;

    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &numbers[i]);
        numCount++;
    }

    int choice;
    do {
    	//Menu for user input
        printf("\nMenu:\n");
        printf("1. Display odd numbers\n");
        printf("2. Display palindrome numbers\n");
        printf("3. Display all 4-digit numbers\n");
        printf("4. Display all numbers in ascending order\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Odd numbers:\n");
                for (int i = 0; i < numCount; i++) {
                    if (numbers[i] % 2 != 0) {
                        printf("%d\n", numbers[i]);
                    }
                }
                break;

            case 2:
                printf("Palindrome numbers:\n");
                for (int i = 0; i < numCount; i++) {
                    if (isPalindrome(numbers[i])) {
                        printf("%d\n", numbers[i]);
                    }
                }
                break;

            case 3:
                printf("4-digit numbers:\n");
                for (int i = 0; i < numCount; i++) {
                    if (numbers[i] >= 1000 && numbers[i] <= 9999) {
                        printf("%d\n", numbers[i]);
                    }
                }
                break;

            case 4:
                bubbleSort(numbers, numCount);
                printf("Numbers in ascending order:\n");
                for (int i = 0; i < numCount; i++) {
                    printf("%d\n", numbers[i]);
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}

