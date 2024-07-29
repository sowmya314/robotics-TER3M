#include <stdio.h>

// checks if a given number is prime

int main() {
    int prime = 1;
    int num = -1;
    
    printf("number: ");
    int err = scanf("%d", &num);
    
    for (int i = 2; i <= num / i; i++) {
        if (num % i == 0) {
            prime = 0;
        }
    }

    if (prime && num != 1) {
        printf("prime\n");
    } else {
        printf("not prime\n");
    }

    return 0;
}