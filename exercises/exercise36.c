#include <stdio.h>

int pointInRectangle(int rx1, int ry1, int rx2, int ry2, int x, int y) {
    return (rx1 <= x <= rx2 && ry1 <= y <= ry2);
}

int main() {
    int rx1; int ry1; int rx2; int ry2; int x; int y;
    printf("rx1: ");
    int err = scanf("%d", &rx1);
    printf("ry1: ");
    err = scanf("%d", &ry1);
    printf("rx2: ");
    err = scanf("%d", &rx2);
    printf("ry2: ");
    err = scanf("%d", &ry2);
    printf("\n");
    printf("x: ");
    err = scanf("%d", &x);
    printf("y: ");
    err = scanf("%d", &y);
    printf("\n");
    if (pointInRectangle(rx1, ry1, rx2, ry2, x, y)) {
        printf("point inside rectangle\n");
    } else {
        printf("point not inside rectangle\n");
    }
}