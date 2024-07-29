#include <stdio.h>
#include <math.h>

int isPrime(int m) {
    int prime = 1;
    for (int i = 2; i <= pow(m, 0.5); i++) {
        if (m % i == 0) {
            prime = 0;
        }
    }
    return prime && m != 1;
}

int main() {
    printf("%d\n", isPrime(1));
    printf("%d\n", isPrime(2));
    printf("%d\n", isPrime(4));
}