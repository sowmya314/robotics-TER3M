#include <stdio.h>
// we want it to be centered within 28 spaces
// january
void monthName(int month, int year) {
    if (month == 1) {
        printf("        january ");
    }
    else if (month == 2) {
        printf("       february ");
    }
    else if (month == 3) {
        printf("         march ");
    }
    else if (month == 4) {
        printf("         april ");
    }
    else if (month == 5) {
        printf("         may ");
    }
    else if (month == 6) {
        printf("         june ");
    }
    else if (month == 7) {
        printf("         july ");
    }
    else if (month == 8) {
        printf("        august ");
    }
    else if (month == 9) {
        printf("       september ");
    }
    else if (month == 10) {
        printf("        october ");
    }
    else if (month == 11) {
        printf("       november ");
    }
    else {
        printf("       december ");
    }
    printf("%d\n", year);
}

int main() {
    for (int i = 0; i < 28; i++) {
        printf("-");
    }
    printf("\n");
    for (int i = 1; i <= 12; i++) {
        monthName(i,2023);
    }
    
    return 0;
}