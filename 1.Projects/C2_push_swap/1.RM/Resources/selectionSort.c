/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selectionSort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:57:06 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/02 20:03:32 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#############################################################################
/*
Explanation:
	swap(xp, yp): This is a helper function to swap two elements.
	selectionSort(arr, n): This function implements the selection sort algorithm.
 		It works by repeatedly finding the minimum element from the unsorted 
		part of the array and putting it at the beginning.
	printArray(arr, size): This is a helper function to print the 
		contents of an array.

How Selection Sort Works:
	Find the minimum: The algorithm starts with the first element and iterates 
	through the array to find the minimum element.
	Swap: The minimum element is swapped with the first element of the unsorted 
	part of the array.
	Repeat: Steps 1 and 2 are repeated for the remaining unsorted part of the array
	until the entire array is sorted.
	Time Complexity: O(n^2) in all cases (best, average, worst).
	Space Complexity: O(1) (in-place sorting).

	Selection sort is not very efficient for large datasets, but it can be useful
	for small datasets or when memory writes are expensive.
*/
//#############################################################################

#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

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

// Function to print an array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

// Driver program to test above functions
int main() {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, n - 1);
  printf("Sorted array: \n");
  printArray(arr, n);
  return 0;
}