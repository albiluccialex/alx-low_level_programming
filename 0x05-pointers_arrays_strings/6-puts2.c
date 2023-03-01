#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * puts2 - Prints every other number
 *
 * @str: The parameter member
 *
 * Return: void
 */
void puts2(char *str)
{
	int g, strlngt, a;

	g = 0;

	while (str[g] != '\0')
	{
		g++;
	}
		strlngt = g - 1;

		for (a = 0; a <= strlngt; a++)
		{
			if (j == 0)
			_putchar(str[0]);
			if (a / 2)
				_putchar(str[a]);
		}
		_putchar('\n');
}
