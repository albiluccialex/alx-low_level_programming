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

	l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l);
	}
	else if (n % 10 == 0)
{
	printf("Last digit of %d is %d and is 0", n, l);
}
	else if (l < 6 && l != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
}
	printf("\n");
	return (0);
}
