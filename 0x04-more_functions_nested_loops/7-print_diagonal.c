#include "main.h"

/**
 * print_diagonal - Will print lines in diagonal pattern
 *
 * @n: input variable
 *
 * Return: void
 */

void print_diagonal(int n)

{
	int i, g;

	if (n <= 0)
		_putchar('\n');
	for (i = 0, i < n; i++)
	{
		for (g = 0; g < i; g++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
