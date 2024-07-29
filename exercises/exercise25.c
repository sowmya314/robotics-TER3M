#include <stdio.h>
// prints factors
int main() {
    int num;
    printf("integer: ");
    int err = scanf("%d", &num);
    int factors = 0;
    for (int i = 1; i <= num / i; i++) {
        if (num % i==0) {
            if (i == num / i) {
                printf("%d ", i);
                factors++;
            } 
            else {
                printf("%d %d ", i, num / i);
                factors += 2;
            }
        }
    }
    printf("\n");
    printf("%d\n", factors);

    return 0;
}