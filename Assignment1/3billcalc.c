#include <stdio.h>

int main() {
    float price;
    int quantity;
    float total;

    printf("Enter price of one item: ");
    scanf("%f", &price);

    printf("Enter quantity purchased: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nTotal Bill = %.2f\n", total);

    return 0;
}