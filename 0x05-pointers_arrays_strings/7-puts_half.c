#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * puts_half - Prints half of a string
 *
 * @str: parameter value
 *
 * Return: void
 */

void puts_half(char *str)
{
	int g, strlngt, prtstr, b;

	g = 0;

	while (str[g] != '\0')
	{
		g++;
	}
	strlngt = g - 1;
	if (g % 2 == 0)
	{
		prtstr = g / 2;
		for (b = prtstr; b <= strlngt; b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		prtstr = (g + 1) / 2;
		for (b = prtstr; b <= strlngt; b++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
