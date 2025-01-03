//#############################################################################
/*
Explanation:
	Function to generate random numbers and write to a dynamically allocated array
    	Seed the random number generator
		Calculate the maximum value
    	Allocate memory for the array
    	Generate and store random numbers
Usage:
	`clang -lm gen.c &&./a.out`
*/
//#############################################################################

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate random numbers without pow
void generate_random_numbers(int *arr, int amount, int max_length) {
    srand(time(NULL)); 

    int max_value = 1;
    for (int i = 0; i < max_length; i++) {
        max_value *= 10;
    }
    max_value--; // Adjust to get the correct upper bound

    for (int i = 0; i < amount; i++) {
        arr[i] = rand() % (max_value + 1); 
    }
}

void print_array(int *arr, int amount) {
    printf("Generated array:\n");
    for (int i = 0; i < amount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int amount = 500;
    int max_length = 5;
    int arr[500];

    generate_random_numbers(arr, amount, max_length);
    print_array(arr, amount);

    return 0;
}
