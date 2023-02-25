#include "main.h"
#include <stdio.h>

/**
 * print_sign - Entry
 *
 * Description: will print signed number
 *
 * Return: 1 if +, -1 if -
 */

int print_sign(int n)

{
	if (n > 0)
	{
		printf("+%d", n);
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-%d", n);
		return (-1);
	}
	return (0);
}
