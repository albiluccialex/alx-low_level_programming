#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Entry point
 *
 * Description: The code will print more numbers
 *
 * Return: 0
 */
int main(void)

{
	int b;

	for (b = 0; b <= 9; b++)
		putchar((b % 10) + '0');

	putchar('\n');

	return (0);
}
