#include <stdio.h>

/**
 * main- Prints all possible combination of two-digit numbrs
 *
 * Return: 0
 */

int main(void)

{
	int j, k;

	for (j = 0; j < 100; j++)
	{
	for (k = 0; k < 100; k++)
	{
	if (j < k)
	{
		putchar((j / 10) + 48);
		putchar((j % 10) + 48);
		putchar(' ');
		putchar((k / 10) + 48);
		putchar((k % 10) + 48);
	if (j != 98 || j != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
