/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:52:32 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/03 20:36:50 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#############################################################################
/*

	getMax(arr, n): This is a helper function to find the maximum value in the 
array, which is used to determine the number of digits to consider.
	countSort(arr, n, exp): This function performs counting sort on the array 
according to the exp (exponent) which represents the digit 
place (units, tens, hundreds, etc.).
	radixsort(arr, n): This function implements the radix sort algorithm.
It calls countSort() for each digit place, starting from the 
least significant digit (units place) to the most significant digit.
	print(arr, n): This is a helper function to print the contents of an array.

How Radix Sort Works:
Find the Maximum: Determine the maximum number in the array to 
know the maximum number of digits.
Sort by Digit: Starting from the least significant digit (units place), 
perform counting sort on the array based on that digit. Then, move to the 
next digit (tens place) and perform counting sort again, and so on until 
the most significant digit is reached.

Radix sort is a non-comparative sorting algorithm that can be efficient 
for integers or strings with a fixed length or a limited range.
*/
//#############################################################################

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 
//#############################################################################
// A utility function to print an array
void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
//#############################################################################
// Function to generate random numbers(given array, 
//								amount of number, max lenght of the numbers)
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
            arr[i] = - random_positive;
        } else {
            arr[i] = random_positive;
        }
    }
}

//#############################################################################
// A utility function to get maximum value in arr
int getMax(int *arr, int n) {
  int mx = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > mx)
      mx = arr[i];
  return mx;
}
// MAIN FUNCTION
//#############################################################################
// A function to do counting sort of arr according to// the digit 
//represented by exp.
void countSort(int *arr, int n, int exp) {
  int output[n]; 
  int i, count[19] = {0}; // Increased size to accommodate negative digits

  // Store count of occurrences in count (adjusting for negative numbers)
  for (i = 0; i < n; i++) {
    int digit = (arr[i] / exp) % 10;
    count[digit + 9]++;  // Shift index by 9 to handle -9 to 9
  }

  // Change count[i] so that count[i] now contains actual position
  for (i = 1; i < 19; i++)
    count[i] += count[i - 1];

  // Build the output array (adjusting for negative numbers)
  for (i = n - 1; i >= 0; i--) {
    int digit = (arr[i] / exp) % 10;
    output[count[digit + 9] - 1] = arr[i];
    count[digit + 9]--;
  }

  // Copy the output array to arr
  for (i = 0; i < n; i++)
    arr[i] = output[i];
}

//#############################################################################
void radixsort(int *arr, int n) {
  // Find the maximum number to know number of digits
  int m = getMax(arr, n);

  // Do counting sort for every digit. Note that instead
  // of passing digit number, exp is passed. exp is 10^i
  // where i is current digit number
  for (int exp = 1; m / exp > 0; exp *= 10)
    countSort(arr, n, exp);
}

//#############################################################################
int main() {
	clock_t start_time = clock();
	
	printf("\n# RADIX SORT ALGO \n");
	
	int arr[100];
	int max_length = 5;
	printf("\n## initializedArray: \n");
	int amount = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, amount);
	printf("\n## unSortedArray: \n");
	generate_random_numbers(arr, amount, max_length);
  	printArray(arr, amount);
	printf("\n## SortedArray: \n");
	radixsort(arr, amount);
  	printArray(arr, amount);

	clock_t end_time = clock();
	double time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
	printf("\n## Function took %f seconds to execute\n", time_taken);
  return 0;
}