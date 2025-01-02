/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heapSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:56:14 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/02 20:16:10 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#############################################################################
/*
Explanation:
	heapify(arr, n, i): This function takes an array (arr), its size (n), and 
		an index (i). It assumes that the binary trees rooted at the left and 
		right children of i are max heaps, but that arr[i] might be smaller 
		than its children, thus violating the max heap property. This function
		"heapifies" the subtree rooted at i to restore the max heap property.
	swap(xp, yp): This is a helper function to swap two elements.
	heapSort(arr, n): This function implements the heap sort algorithm.
	Build Max Heap: It first builds a max heap from the input array.
	Extract Max: Then, it repeatedly extracts the maximum element 
		(root of the heap) and places it at the end of the array.
	Heapify: After each extraction, it reduces the heap size and calls
	heapify() to maintain the max heap property.
	printArray(arr, size): This is a helper function to print the 
	contents of an array.

How Heapsort Works:
	Build a Max Heap: The input array is transformed into a 
		max heap (a binary tree where the value of each node is greater 
		than or equal to the value of its children).
	Extract the Max: The root of the heap (which is the maximum element)
		is swapped with the last element of the array. The size of 
		the heap is reduced by 1.
	Heapify: The heapify() function is called on the root of the heap 
		to restore the max heap property.
	Repeat: Steps 2 and 3 are repeated until the entire array is sorted.
	Time Complexity: O(n log n) for all cases (best, average, worst).
	Space Complexity: O(1) (in-place sorting).
*/
//#############################################################################

#include <stdio.h>

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i) {
  int largest = i;   // Initialize largest as root
  int l = 2 * i + 1; // left = 2*i + 1
  int r = 2 * i + 2; // right = 2*i + 2

  // If left child is larger than root
  if (l < n && arr[l] > arr[largest])
    largest = l;

  // If right child is larger than largest so far
  if (r < n && arr[r] > arr[largest])
    largest = r;

  // If largest is not root
  if (largest != i) {
    swap(&arr[i], &arr[largest]);

    // Recursively heapify the affected sub-tree
    heapify(arr, n, largest);
  }
}

// Function to swap two elements
void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

// main function to do heap sort
void heapSort(int arr[], int n) {
  // Build heap (rearrange array)
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // One by one extract an element from heap
  for (int i = n - 1; i > 0; i--) {
    // Move current root to end
    swap(&arr[0], &arr[i]);

    // call max heapify on the reduced heap
    heapify(arr, i, 0);
  }
}

// Function to print an array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

// Driver program
int main() {
  int arr[] = {12, 11, 13, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  heapSort(arr, n);

  printf("Sorted array is \n");
  printArray(arr, n);
}