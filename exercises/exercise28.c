#include <stdio.h>
#include <stdlib.h>

int main() {
    int ans = -1;
    printf("Enter a number to guess: ");
    int err = scanf("%d", &ans);
    err = system("clear");
    
    int guess = -1;
    int count = 0;

    do {
        printf("Enter guess: ");
        err = scanf("%d", &guess);
        count++;
        if (guess > ans) {
            printf("Try a smaller number\n");
        } else if (guess < ans) {
            printf("Try a larger number\n");
        }
    } while (guess != ans);
    printf("correct!! you guessed in %d tries\n", count);

    return 0;
}