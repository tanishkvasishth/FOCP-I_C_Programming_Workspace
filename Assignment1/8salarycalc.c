#include <stdio.h>

int main() {
    float basic_salary;
    float allowance;
    float bonus;
    float final_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    printf("Enter Allowance: ");
    scanf("%f", &allowance);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    final_salary = basic_salary + allowance + bonus;

    printf("\nFinal Salary = %.2f\n", final_salary);

    return 0;
}