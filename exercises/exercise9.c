#include <stdio.h>
#define SCHOLARSHIP 94

int main(void) {
    float mark1;
    float mark2;
    float mark3;

    printf("mark1: ");
    scanf("%f", &mark1);

    printf("mark2: ");
    scanf("%f", &mark2);

    printf("mark3: ");
    scanf("%f", &mark3);

    float average = (mark1 + mark2 + mark3) / 3;

    printf("Average is %0.1f\n", average);

    if (average >= SCHOLARSHIP) {
        printf("ELIGIBLE FOR SCHOLARSHIP\n");
    }
    else {
        printf("NOT ELIGIBLE\n");
    }
}