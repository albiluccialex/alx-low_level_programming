#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_puts- Prints a string followed by new line
 *
 * @str: parameter member
 *
 * Return: 0
 */

void _puts(char *str)

{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
