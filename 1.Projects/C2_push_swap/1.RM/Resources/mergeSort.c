/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:00:33 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/02 20:16:17 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#############################################################################
/*
Explanation:
	merge(arr, l, m, r): This function takes an array (arr), and 
		indices l, m, and r which define two sorted subarrays 
		within arr: arr[l..m] and arr[m+1..r]. It merges these two subarrays
		into a single sorted subarray within arr[l..r].
	mergeSort(arr, l, r): This function implements the merge sort 
		algorithm. It recursively divides the input array into two halves,
		sorts them, and then merges the sorted halves.
	printArray(arr, size): This is a helper function to print 
			the contents of an array.

How Merge Sort Works:
	Divide: If the array has more than one element, it is divided into two halves.
	Conquer: Each half is recursively sorted.
	Combine: The two sorted halves are merged together to produce a 
		single sorted array.
	Time Complexity: O(n log n) in all cases (best, average, worst).
	Space Complexity: O(n) (due to the auxiliary space used for merging).
*/
//#############################################################################

#include <stdio.h>

// Function to merge two sorted subarrays
void merge(int arr[], int l, int m, int r) {
  // Calculate sizes of two subarrays to be merged
  int n1 = m - l + 1;
  int n2 = r - m;

  // Create temporary arrays to hold the subarrays
  int L[n1], R[n2];

  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  // Merge the temporary arrays back into arr[l..r]
  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of L[], if there are any
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of R[], if there are any
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

// Function to perform merge sort
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // Find the middle point
    int m = l + (r - l) / 2;

    // Recursively sort first and second halves
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted halves
    merge(arr, l, m, r);
  }
}

// Function to print an array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {12, 11, 13, 5, 6, 7};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  printf("Given array is \n");
  printArray(arr, arr_size);

  mergeSort(arr, 0, arr_size - 1);

  printf("\nSorted array is \n");
  printArray(arr, arr_size);
  return 0;
}