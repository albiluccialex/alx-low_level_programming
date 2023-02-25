#include "main.h"

/**
 * print_alphabet- Entry
 *
 * Description: This code will print the alphabet.
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char i = 'a';
	char j;

	{

	for (j = 'z'; i <= j; i++)
		_putchar(i);
	}
	_putchar('\n');
}
