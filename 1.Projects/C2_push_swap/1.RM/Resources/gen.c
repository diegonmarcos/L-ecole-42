//#############################################################################
/*
Explanation:
// Function to generate random numbers and write to a dynamically allocated array
    // Seed the random number generator
	// Calculate the maximum value
    // Allocate memory for the array
    // Generate and store random numbers
*/
//#############################################################################

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void generate_random_numbers(int **arr, int amount, int max_length) {
    srand(time(NULL));

    int max_value = (int)pow(10, max_length) - 1;

    for (int i = 0; i < amount; i++) {
        (*arr)[i] = rand() % (max_value + 1);
    }
}

int main() {
    int amount = 500;
    int max_length = 5;
    int arr[500];

    generate_random_numbers(&arr, amount, max_length);

    return 0;
}