#include <stdio.h>

int januaryFirst(int year) {
    return (1 + 5 * ((year - 1) % 4) + 4 * ((year - 1) % 100) + 6 * ((year  - 1) % 400)) % 7;
}

int main() {
    printf("year: ");
    int year = -1;
    int err = scanf("%d", &year);
    printf("%d\n", januaryFirst(year));
    return 0;
    
}