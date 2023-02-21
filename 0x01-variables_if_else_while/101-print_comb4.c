#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-Entry point
 *
 * Description: This code will print even more combination
 *
 * Return: Always 0
 */

int main(void)
{

	int a;

	int b;

	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; c++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
