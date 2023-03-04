#include "main.h"

/**
 * print_line - Will print a straight line
 *
 * @n: number of times _ should be printed
 *
 */

void print_line(int n)

{
	int linchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (linchr = 1; linchr <= n; ++linchr)
			_putchar('_');
		_putchar('\n');
	}
}
