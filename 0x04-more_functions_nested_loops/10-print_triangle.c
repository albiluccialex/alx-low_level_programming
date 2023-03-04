#include "main.h"

/**
 * print_triangle - Will print triangle followed by a new line
 *
 * @size: Refers to size of triangle
 *
 * Return: 0
 */

void print_triangle(int size)

{
	int hgt, wdth;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hgt = 1; hgt <= size; ++hgt)
		{
			for (wdth = 1; wdth <= size; ++wdth)
			{
				if ((hgt + wdth) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
