#include <stdio.h>

/**
 * _sqrt - Will find square root of a number
 *
 * @x: input number
 *
 * Return: square root of x
 */

double _sqrt(double x)

{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints largest prime factor
 *
 * @num: number to find
 */

void largest_prime_factor(long int num)

{
	int primNu, lrgst;

	/* divide first with the smallest prime number */
	while (num %  2 == 0)
		num = num / 2;

	/* num is likely odd so proceed to the next prime number */
	for (primNu = 3; primNu <= _sqrt(num); primNu += 2)
	{
		while (num % primNu == 0)
		{
			num = num / primNu;
			largest = primNu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", lrgst);
}

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
