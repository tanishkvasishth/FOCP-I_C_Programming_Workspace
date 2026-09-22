#include<stdio.h>
int main(){
    int student_id;
    int age;
    float percentage;
    char grade;
    
    printf("Enter Student ID: ");
    scanf("%d", &student_id);
    
    printf("\nEnter Age: ");
    scanf("%d", &age);

    printf("\nEnter percentage: ");
    scanf("%f", &percentage);

    printf("\nEnter Grade: ");
    scanf(" %c", &grade);

    printf("\nStudent ID: %d ", student_id);
    printf("\nAge       : %d ", age);
    printf("\nPercentage: %f ", percentage);
    printf("\nGrade     : %c ", grade);
    
    return 0;
}