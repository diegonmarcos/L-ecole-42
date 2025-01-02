/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:52:32 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/02 19:54:48 by dinepomu         ###   ########.fr       */
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

// A utility function to get maximum value in arr
int getMax(int arr, int n) {
  int mx = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > mx)
      mx = arr[i];
  return mx;
}

// A function to do counting sort of arr according to// the digit represented by exp.
void countSort(int arr, int n, int exp) {
  int output[n]; // output array
  int i, count[10] = {0};

  // Store count of occurrences in count
  for (i = 0; i < n; i++)
    count[(arr[i] / exp) % 10]++;

  // Change count[i] so that count[i] now contains actual
  // position of this digit in output
  for (i = 1; i < 10; i++)
    count[i] += count[i - 1];

  // Build the output array
  for (i = n - 1; i >= 0; i--) {
    output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    count[(arr[i] / exp) % 10]--;
  }

  // Copy the output array to arr, so that arr now
  // contains sorted numbers according to current digit
  for (i = 0; i < n; i++)
    arr[i] = output[i];
}

// The main function to that sorts arr of size n using
// Radix Sort
void radixsort(int arr, int n) {
  // Find the maximum number to know number of digits
  int m = getMax(arr, n);

  // Do counting sort for every digit. Note that instead
  // of passing digit number, exp is passed. exp is 10^i
  // where i is current digit number
  for (int exp = 1; m / exp > 0; exp *= 10)
    countSort(arr, n, exp);
}

// A utility function to print an array
void print(int arr, int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

// Driver program to test above functions
int main() {
  int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
  int n = sizeof(arr) / sizeof(arr[0]);
  radixsort(arr, n);
  print(arr, n);
  return 0;
}