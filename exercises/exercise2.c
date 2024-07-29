#include <stdio.h>

int main(void) {
  int celsius;
  printf("Enter a temperature in Celsius: ");
  scanf("%d", &celsius);
  printf("%s%.1f%s\n", "Temperature in Fahrenheit is ",
         (celsius * 9.0 / 5) + 32, " degrees");
  return 0;
}