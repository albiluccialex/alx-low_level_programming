#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main-Entry point
 *
 * Description:'(This code will assign a random num ber to n)'
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;
	printf("Last digit of %d is %d", l, n);
	if (l > 5)
	{
		printf("and is greater than 5");
	}
	if (l == 0)
	{
		printf("and is 0");
	}
	if (l < 6 && l != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");

	return (0);
}
