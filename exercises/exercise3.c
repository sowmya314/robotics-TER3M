#include <stdio.h>

int main(void) {
    printf("Enter the year you were born: ");
    int birthyear;
    
    scanf("%d", &birthyear);

    printf("%s%d%s\n", "You are approximately ", 2023 - birthyear, " years old");
    
    return 0;
}