#include <stdio.h>

int main(void) {
    printf("Enter a decimal integer: ");
    int num;
    scanf("%d", &num);
    printf("%x\t%o\n", num, num);

    printf("Enter a hexadecimal integer: ");
    scanf("%x", &num);
    printf("%d \t %o \t %c\n", num, num, num);
    return 0;