#include <stdio.h>
#include <math.h>

double futureAmount(double p, double r, double n) {
    return p * pow(1 + r, n);
}

int main() {
    double p; double r; double n;
    printf("p: "); scanf("%lf", &p);
    printf("r: "); scanf("%lf", &r);
    printf("n: "); scanf("%lf", &n);

    printf("Future amount: %lf\n", futureAmount(p, r, n));

    return 0;
}