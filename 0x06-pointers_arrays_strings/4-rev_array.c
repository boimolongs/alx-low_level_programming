#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		/* Swap elements at start and end indices */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		 /* Move indices toward the center */
		start++;
		end--;
	}
}

