#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int num3;

    printf("num1: ");
    scanf("%d", &num1);

    printf("num2: ");
    scanf("%d", &num2);

    printf("num3: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number\n", num1);
    } else if (num2 >= num3 && num2 >= num1) {
        printf("%d is the largest number\n", num2);
    } else {
        printf("%d is the largest number\n", num3);
    }

    return 0;
}