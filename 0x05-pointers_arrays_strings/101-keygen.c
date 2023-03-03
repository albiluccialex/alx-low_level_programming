#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This code will generate a random
 * valid password for a program
 *
 * Return: 0 for success
 */
int main(void)

{
	int pss[100];
	int g, sum, j;

	sum = 0

		srand(time(NULL));
	for (g = 0; g < 100; g++)
	{
		pss[g] = rand() % 78;
		sum += (pass[g] + '0');
		putchar(pass[g] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			puchar(j + '0');
			break;
		}
	}
	return (0);
}
