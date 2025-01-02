/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   introSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:04:28 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/02 20:16:15 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
// Function prototypes
	swap(): A helper function to swap two elements in the array.
	partition(): This function partitions the array around a 
		pivot (last element in this case) for Quicksort.
	quicksort(): The standard recursive Quicksort implementation.
	heapify(): Restores the max heap property for a subtree in Heapsort.
	heapsort(): The complete Heapsort implementation.
	introsort():
		Takes the array, lower and upper bounds, and depthLimit as input.
		If the subarray is small, you could use insertion sort
		If depthLimit reaches 0, it switches to heapsort().
		Otherwise, it performs Quicksort partitioning and recursively
		calls introsort() with a decremented depthLimit.
*/
void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quicksort(int arr[], int low, int high);
void heapify(int arr[], int n, int i);
void heapsort(int arr[], int n);
void introsort(int arr[], int low, int high, int depthLimit);


int main() {
    int arr[500];
    int n = sizeof(arr) / sizeof(arr[0]); 
    int depthLimit = 2 * log2(n);

    introsort(arr, 0, n - 1, depthLimit);

    return 0;
}

//############################################################################
// SWAP
	// Swaps two elements

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//############################################################################
// QUICKSORT
	// Partitions the array for quicksort
	// Quicksort implementation

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
//############################################################################
// INSERTION SORT
	// n number of numbers

/* interactive version of the recursive
void insertion_sort(int arr[], int low, int high) {
    for (int i = low + 1; i <= high; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= low && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}*/

void insertion_sort(int arr[], int n) {
    if (n <= 1) {
        return;
    }

    insertion_sort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}
//############################################################################
// BST - MAX HEAP
	// Heapify a subtree rooted at node i
	// Heapsort implementation

void heapify(int arr[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
//############################################################################
// BST - MAX HEAP
	// Introsort implementation

void introsort(int arr[], int low, int high, int depthLimit) {
	int n = high - low + 1;
    if (high - low < 16) {
        insertion_sort(arr + low, n);
        return;
    }

    if (depthLimit == 0) {
        heapsort(arr + low, high - low + 1);
        return;
    }

    int pi = partition(arr, low, high); 
    introsort(arr, low, pi - 1, depthLimit - 1);
    introsort(arr, pi + 1, high, depthLimit - 1);
}