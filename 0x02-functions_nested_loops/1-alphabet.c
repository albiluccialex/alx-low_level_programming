#include "main.h"

/**
 * main- Entry
 *
 * Description: This code will print the alphabet.
 *
 * Return: 0
 */

int main(void)

{
	char i = "a";
	char j = "z";

	{

	while (i <= j)
		_putchar("%c", i, i++);
	}
	_putchar('\n');
	return (0);
}
