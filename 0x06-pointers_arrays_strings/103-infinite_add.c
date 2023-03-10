#include "main.h"

/**
 * rev_string - reverse array
 * @n: Integer parameter
 * Return: 0
 */

void rev_string(char *n)

{
	int a = 0;
	int j = 0;
	char temp;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (j = 0; j < a; j++, a++)
	{
		temp = *(n + j);
		*(n + j) = *(n + a);
		*(n + a) = temp;
	}
}

/**
 * infinite_add - Will add two numbers
 * @n1: Text rep of 1st nymber to add
 * @n2: text rep of second number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int overflow = 0, a = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + j) != '\0')
		j++;
	a--;
	j--;
	if (j >= size_r || a >= size_r)
		return (0);

	while (j >= size_r || a >= 0 || overflow == 1)
	{
		if (a < 0)
			val1 = 0;
		else
			val1 = *(n1 + a) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		a--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
