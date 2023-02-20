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

	sirand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);

	if (last_digit > 5)
{
	printf("and is greater than 5\n");
}
	else if (last_digit == 0)
{
	printf("and is 0\n");
}
	else
{
	printf("and is less than 6 and not 0\n");
}

	return (0);
}
