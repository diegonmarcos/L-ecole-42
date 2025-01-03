#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_numbers(int *arr, int amount, int max_length) {
    srand(time(NULL));

    int max_value = 1;
    for (int i = 0; i < max_length; i++) {
        max_value *= 10;
    }
    max_value--;

    for (int i = 0; i < amount; i++) {
        // Generate random number from 0 to max_value
        int random_positive = rand() % (max_value + 1); 

        // Randomly decide whether to make it negative
        int random_sign = rand() % 2;  
        if (random_sign == 1) {
            arr[i] = -random_positive;
        } else {
            arr[i] = random_positive;
        }
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