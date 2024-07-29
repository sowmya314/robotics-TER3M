#include <stdio.h> 

int reflectionAngle(int i, int surface) {
    if (surface == 0) {                             // floor - 180 to 360
        return (360 - i) % 360;
    } else if (surface == 1 || surface == 3) {      // right wall - 0 to 90, 270 to 360 and left wall - 90 to 270
        return (540 - i) % 360;
    } else if (surface == 2) {                      // ceiling - 0 to 180
        return (360 - i) % 360;
    }
    return 0;
}

int main() {
    int x; int y; int err;
    while (1 == 1) {
        printf("angle: "); err = scanf("%d", &x);
        printf("surface: "); err = scanf("%d", &y);
        printf("%d\n", reflectionAngle(x, y));
    }
    return 0;
}