/*
power of 10
*/
#include <stdio.h>

double power_of_10(int n) {
  if (n == 0) {
    return 1;
  } else if (n > 0) {
    return 10 * power_of_10(n - 1);
  } else {  
    return 1 / power_of_10(-n);
  }
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int exponent;

  printf("Enter the exponent: ");
  scanf("%d", &exponent);
  printf("10 ^ %d = %lf\n", exponent, power_of_10(exponent));
  
  printf("Enter the factorial: ");
  scanf("%d", &exponent);
  printf("%d! = %d\n", exponent, factorial(exponent));
  return 0;
}