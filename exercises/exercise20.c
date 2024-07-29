#include <stdio.h>

int main() {
    unsigned int x = -24;
    printf("%d\n", x);
    int year = -1;
    printf("year: ");
    int err = scanf("%d", &year);

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        printf("leap\n");
    }
    else {
        printf("not leap\n");
    }
    

    return 0;
}

/*
                   ********LONGER METHOD********

#include <stdio.h>

int main() {
    int year = -1;
    printf("year: ");
    int err = scanf("%d", &year);

    if (year % 400 == 0) {
        printf("leap\n");
    }
    else if (year % 100 == 0) {
        printf("not leap\n");
    }
    else if (year % 4 == 0) {
        printf("leap\n");
    }
    else {
        printf("not leap\n");
    }
}

*/