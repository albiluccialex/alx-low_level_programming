#include "main.h"

/**
 * _isdigit- This funtion will check for a digit(0 through 9)
 *
 * @c: The input
 *
 * Return: Will return 1 if digit, 0 if not digit
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
