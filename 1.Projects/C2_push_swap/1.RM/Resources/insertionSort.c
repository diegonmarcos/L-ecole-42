/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertionSort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:55:07 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/02 19:55:57 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#############################################################################
/*
Explanation:

insertionSort(arr, n): This function implements the insertion sort algorithm.
printArray(arr, size): This is a helper function to print the contents of an
 array.
How Insertion Sort Works:

Iterate: The algorithm iterates through the array, starting from the second 
element (index 1).
Compare and Shift: In each iteration, it compares the current 
element (the "key") with the elements before it. If the key is smaller 
than an element, it shifts that element one position to the right. 
This continues until the correct position for the key is found.
Insert: The key is then inserted into its correct position in the 
sorted part of the array.
Time Complexity:

Best Case: O(n) (when the array is already sorted)
Average and Worst Case: O(n^2)
Space Complexity: O(1) (in-place sorting)

Insertion sort is efficient for small datasets or nearly sorted datasets.
It's also often used in hybrid sorting algorithms.
*/
//#############################################################################

#include <stdio.h>

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n) {
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    // Move elements of arr[0..i-1], that are
    // greater than key, to one position ahead
    // of their current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
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
  int arr[] = {12, 11, 13, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, n);
  printArray(arr, n);

  return 0;
}