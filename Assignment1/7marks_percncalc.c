#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}