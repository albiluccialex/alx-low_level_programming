#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Entry point
 *
 * Description: This code will print a combination
 *
 * Return: 0
 */
int main(void)
{
	int r;

	int j;

	for (r = '0'; r <= '9';  r++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (j > r)
			{
				putchar(r);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
