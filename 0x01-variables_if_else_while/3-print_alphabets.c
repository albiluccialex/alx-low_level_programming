#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Entry point
 *
 * Description: This code will print alphabets in recerse
 *
 * Return: Always 0
 */
int main(void)

{
	int i;
	for (i = 'a'; i <= 'z'; i++)

	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
		return (0);
}
