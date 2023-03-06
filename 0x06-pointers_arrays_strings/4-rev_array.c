#include "main.h"

/**
 * reverse_array - Will reverse an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)

{
	int i, j, tmp;

	j = n - 1;

	for (1 = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
