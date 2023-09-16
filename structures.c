// Write a program in c language to store the name, register no and 3 subject marks of 10 students and display the total mark of each student and average mark of the class

#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks[3];
    float totalMarks;
};

int main() {
    struct Student students[10];
    float classTotalMarks = 0.0;

    // Input data for 10 students
    for (int i = 0; i < 10; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Register No: ");
        scanf("%d", &students[i].regNo);
        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
        classTotalMarks += students[i].totalMarks;
    }

    // Calculate and display the total marks for each student
    printf("\nTotal Marks for Each Student:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %s, Register No: %d, Total Marks: %.2f\n", i + 1, students[i].name, students[i].regNo, students[i].totalMarks);
    }

    // Calculate and display the average marks for the class
    float classAverageMarks = classTotalMarks / 10.0;
    printf("\nAverage Marks for the Class: %.2f\n", classAverageMarks);

    return 0;
}
