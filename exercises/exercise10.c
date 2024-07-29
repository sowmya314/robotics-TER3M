#include <stdio.h>

int main() {
    int num1;
    int num2;
    
    printf("First number: ");
    scanf("%d", &num1);

    printf("Second number: ");
    scanf("%d", &num2);

    if (num1 >= num2) {
        printf("%d is the larger number\n", num1);
    }
    else {
        printf("%d is the larger number\n", num2);
    }

    return 0;
}