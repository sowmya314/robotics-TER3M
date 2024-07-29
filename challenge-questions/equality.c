#include <stdio.h>

int equal(int x, int y) {
    return (x^y) & 1 | (x^y) >> 1 & 1 | (x^y) >> 2 & 1 | (x^y) >> 3 & 1 | (x^y) >> 4 & 1 | (x^y) >> 5 & 1 | 
        (x^y) >> 6 & 1 | (x^y) >> 7 & 1 | (x^y) >> 8 & 1 | (x^y) >> 9 & 1 | (x^y) >> 10 & 1 | (x^y) >> 11 & 1;
}

int main() {
    int x; int y;
    printf("first num: "); 
    int err = scanf("%d" , &x);
    printf("second num: ");
    err = scanf("%d", &y);
    printf("%d\n", equal(x, y));
    return 0;
}