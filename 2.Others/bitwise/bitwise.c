


#include <stdio.h>

int main() {
    unsigned int a = 6;  // Binary: 101
    unsigned int b = 3;  // Binary: 011
    unsigned int sum, carry;

    while (b != 0) {
        printf("b1: %u\n", b);
		sum = a ^ b;        // Calculate sum without carry
		printf("sum: %u\n", sum);
        carry = (a & b) << 1;  // Calculate carry
		printf("carry: %u\n", carry);
        a = sum;            // Update a
		printf("a: %u\n", a);
        b = carry;           // Update b with the carry
		printf("b: %u\n", b);
		printf("____\n");
    }

    printf("Binary sum: %u\n", a);  // Output: 8 (binary: 1000)

    return 0;
}