/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quickSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:58:55 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/03 20:10:26 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#############################################################################
/*
Header:
	swap(a, b): This is a helper function to swap two elements.
	partition(arr, low, high): This function selects a pivot element 
		(in this case, the last element) and partitions the array such that
		all elements smaller than the pivot are placed before it, and all 
		greater elements are placed after it. It returns the index of the 
		pivot element after partitioning.
	quickSort(arr, low, high): This function implements the quicksort 
		algorithm. It first partitions the array using the partition() 
		function, and then recursively sorts the subarrays before and after 
		the pivot element.
	printArray(arr, size): This is a helper function to print the contents 
		of an array.

Explanation:
	Choose a pivot: A pivot element is selected from the array.
	Partition: The array is partitioned around the pivot. Elements smaller
	than the pivot are moved to its left, and elements greater than the 
		pivot are moved to its right.   
	Recursively sort: The subarrays to the left and right of the pivot are 
		recursively sorted.
	Time Complexity:
		Best and Average Case: O(n log n)
		Worst Case: O(n^2) (occurs when the pivot selection repeatedly 
			results in highly unbalanced partitions, like when the array 
			is already sorted)
		Space Complexity: O(log n) (average case, due to the recursion depth)
*/
//#############################################################################

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#############################################################################

// UTILS
//#############################################################################
// Function to measure the execution time of another function
double measure_execution_time(void (*func)(void)) { 
    clock_t start_time, end_time;
    double cpu_time_used;

    start_time = clock();

    // Call the function passed as an argument
    func(); 

    end_time = clock();
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    return cpu_time_used;
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
            arr[i] = -random_positive;
        } else {
            arr[i] = random_positive;
        }
    }
}

//#############################################################################
// Function to print an array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

//#############################################################################
// Function to swap two elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

//#############################################################################

// MAIN
//#############################################################################
// Function to partition the array around a pivot element
int partition(int arr[], int low, int high) {
  // Select the rightmost element as the pivot
  int pivot = arr[high];

  // Pointer for greater element
  int i = (low - 1);

  // Traverse through all elements
  // compare each element with pivot
  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      // If element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;

      // Swapping element at i with element at j
      swap(&arr[i], &arr[j]);
    }
  }

  // Swap the pivot element with the greater element specified by i
  swap(&arr[i + 1], &arr[high]);

  // Return the position from where partition is done
  return (i + 1);
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    // Find pivot element such that
    // elements smaller than pivot are on the left
    // elements greater than pivot are on the right
    int pi = partition(arr, low, high);

    // Recursive call on the left of pivot
    quickSort(arr, low, pi - 1);

    // Recursive call on the right of pivot
    quickSort(arr, pi + 1, high);
  }
}

//#############################################################################
int main() {
	clock_t start_time = clock();
	
  	printf("\n# QUICK SORT ALGO \n");
	
	int arr[100];
	int max_length = 5;

	printf("\n## initializedArray: \n");
	int amount = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, amount);
	printf("\n## unSortedArray: \n");
	generate_random_numbers(arr, amount, max_length);
  	printArray(arr, amount);
	quickSort(arr, 0, amount - 1);
  	printf("\n## SortedArray: \n");
  	printArray(arr, amount);

	clock_t end_time = clock();
	double time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
	printf("\n## Function took %f seconds to execute\n", time_taken);
	
  return 0;
}