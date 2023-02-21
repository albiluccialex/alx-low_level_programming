#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Entry
 *
 * Description: This code will print more alphabets
 *
 * Return: Will be 0
 */
int main(void)

{

	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
		putchar('\n');
		return (0);
}
