#include <stdio.h>

int main(void) {
  int a;
  int b;
  int c;
  int d;
  int e;

  printf("First number: ");
  scanf("%d", &a);
  printf("Second number: ");
  scanf("%d", &b);
  printf("Third number: ");
  scanf("%d", &c);
  printf("Fourth number: ");
  scanf("%d", &d);
  printf("Fifth number: ");
  scanf("%d", &e);

  int max;

  if (a >= b && a >= c && a >= d && a >= e) {
    max = a;
  } else if (b >= a && b >= c && b >= d && b >= e) {
    max = b;
  } else if (c >= a && c >= b && c >= d && c >= e) {
    max = c;
  } else if (d >= a && d >= b && d >= c && d >= e) {
    max = d;
  } else {
    max = e;
  }

  printf("%d is the largest number\n", max);

  return 0;
}