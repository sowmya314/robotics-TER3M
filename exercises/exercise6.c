#include <stdio.h>
#define PI 3.14
int main() {
    float radius = -1;
    printf("radius: ");
    scanf("%f", &radius);
    printf("Circumference of the circle is %0.1f units\n", PI * 2 * radius);
    
    return 0;
}