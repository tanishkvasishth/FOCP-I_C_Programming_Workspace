#include <stdio.h>

int main() {
    int product_id;
    float price;
    int quantity;
    float discount_percentage;

    float subtotal;
    float discount_amount;
    float final_amount;

    printf("Enter Product ID: ");
    scanf("%d", &product_id);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discount_percentage);

    subtotal = price * quantity;
    discount_amount = subtotal * discount_percentage / 100;
    final_amount = subtotal - discount_amount;

    printf("Product ID       : %d\n", product_id);
    printf("Subtotal         : %.2f\n", subtotal);
    printf("Discount Amount  : %.2f\n", discount_amount);
    printf("Final Payable    : %.2f\n", final_amount);

    return 0;
}