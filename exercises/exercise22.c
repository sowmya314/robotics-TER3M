#include <stdio.h>

int main() {
    printf("x\t\ty\n");
    printf("-----------\n");

    for (int i = -4; i <= 4; i++) {
        printf("%d\t\t%d\n", i, i*i*i);
    }

    return 0;
}