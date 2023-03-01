#include "main.h"

/**
 * swap_int- swaps values
 *
 * @a: parameter member
 * @b: parameter member
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
