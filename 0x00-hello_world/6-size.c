#include <stdio.h>
/**
 * main-Entry
 *
 * Description:'(This code will Write a C program that prints the size
 *
 * of various types on the computer it is compiled and run on
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));

	return (0);
}
