#include <stdio.h>
#include <math.h>

void equationOfLine(int x1, int y1, int x2, int y2) {
    float slope = (y2 - y1) / (1.0 * (x2 - x1));
    float yint = y1 - slope * x1;

    if (yint == 0) {
        printf("\n%s%.2f%s\n", "y = ", slope, "x");
    } else {
        if (yint > 0) {
            printf("\n%s%.2f%s%.2f\n", "y = ", slope, "x + ", yint);
        } else {
            printf("\n%s%.2f%s%.2f\n", "y = ", slope, "x - ", -yint);
        }
    }
}

int main() {
    int x1; int x2; int y1; int y2; int err;
    printf("x1: "); err = scanf("%d", &x1);
    printf("y1: "); err = scanf("%d", &y1);
    printf("x2: "); err = scanf("%d", &x2);
    printf("y2: "); err = scanf("%d", &y2);

    equationOfLine(x1, y1, x2, y2);

    return 0;
}