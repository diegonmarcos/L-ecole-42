#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

unsigned int gray_code(unsigned int n) {
  return n ^ (n >> 1);
}

void generate_gray_codes(unsigned int limit) {
  for (unsigned int i = 0; i <= limit; i++) {
    print_bits(gray_code(i));
	printf("(#%d: %u)\n", i, gray_code(i));
  }
}

int main(int argc, char **argv) {
  generate_gray_codes(atoi(argv[1]));
  return 0;
}