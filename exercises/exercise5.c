#include <stdio.h>

int main(void) {
    float price1 = 30 * 0.75;
    float price2 = 52 * 0.65;
    float price3 = 26 * 1.75;

    float total = price1 + price2 + price3;

    printf("Receipt for Sweets Purchases\n");
    printf("================================================\n");
    printf("%s%7.2f\n", "30 Chocolate Chip Cookies at $0.75 each $", price1);
    printf("%s%7.2f\n", "52 Vanilla Cookies at $0.65 each\t\t$", price2);
    printf("%s%7.2f\n", "26 Chocolate Milk at $1.75 each\t\t\t$", price3);
    printf("================================================\n");
    printf("%s%7.2f\n", "Total Amount \t\t\t\t\t\t\t$", total);
    
    return 0;
}