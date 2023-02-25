#include "main.h"

/**
 * print_alphabet_x10- Entry
 *
 * Description: Will print x10 alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char k;
	char i = 'a';
	char j;

	for (k = 1; k <= 10; k++)
	{
		for (j = 'z'; i <= j; i++)
		{
			_putchar(k, i);
		}
		_putchar('\n');
	}
}
