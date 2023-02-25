#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 *
 * Description: will print signed number
 *
 * Return: 1 if +, -1 if -
 */

int main(void)

{
	int n;

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
		printf("-d", -n);
	}
}
