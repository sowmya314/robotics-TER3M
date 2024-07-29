#include <stdio.h>

int main() {
    int x = -1;
    int y = -1;
    printf("x-coordinate: ");
    scanf("%d", &x);
    printf("y-coordinate: ");
    scanf("%d", &y);
    printf("%s%d%s %d%s", "The point (", x, ",", y, ") is in the ");
    if (x > 0 && y > 0) {
        printf("first quadrant");
    } else if (x < 0 && y > 0) {
        printf("second quadrant");
    } else if (x < 0 && y < 0) {
        printf("third quadrant");
    } else if (x > 0 && y < 0) {
        printf("fourth quadrant");
    } else if (x == 0 || y == 0) {
        printf("x or y axis");
    }
    printf("\n");
    return 0;
}