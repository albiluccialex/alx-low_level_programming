#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_rev- Prints a string in reverse
 *
 * @s: parameter member
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int g, j = 0;

	while (s[j] != '\0')
	{
		j++
	}
	for (g = j - 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}
