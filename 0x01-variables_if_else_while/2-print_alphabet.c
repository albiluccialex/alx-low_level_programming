#include <stdio.h>
/**
 * main-Entry point
 *
 * Description: This program will print alphabet
 *
 * Return: Will return 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	putchar(alph);
	}
	putchar('\n');
	return (0);
}
