#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 6) {  // Expecting 5 numbers + program name
        fprintf(stderr, "Usage: %s <num1> <num2> <num3> <num4> <num5>\n", argv[0]);
        return 1; 
    }

    // Convert command-line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);
    int num4 = atoi(argv[4]);
    int num5 = atoi(argv[5]);

    // Example processing: Calculate the sum of the numbers
    int sum = num1 + num2 + num3 + num4 + num5; 

    printf("Sum of numbers: %d\n", sum); 
    return 0;
}
