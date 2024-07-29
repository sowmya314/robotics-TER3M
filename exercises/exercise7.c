#include <stdio.h>
#define BPM 72

int main(void) {
    printf("Enter days: ");
    int days;
    scanf("%d", &days);

    printf("The heart beats approximately %d tiems in %d days\n", days * 24 * 60 * BPM, days);

    return 0;
}