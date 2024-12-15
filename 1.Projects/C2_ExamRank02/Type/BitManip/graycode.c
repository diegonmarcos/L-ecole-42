#include <stdio.h>
#include <stdlib.h>

unsigned int gray_code(unsigned int n) {
  return n ^ (n >> 1);
}

void generate_gray_codes(unsigned int limit) {
  for (unsigned int i = 0; i <= limit; i++) {
    printf("#%d: %u\n", i, gray_code(i));
  }
}

int main(int argc, char **argv) {
  generate_gray_codes(atoi(argv[1]));
  return 0;
}