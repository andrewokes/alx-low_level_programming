#include "main.h"

/**
 * print_last_digit - The last digit of a number
 *
 * @a: the input value to get the last didgit
 *
 * Return: Value of the last digit
 */

int print_last_digit(int a)

{
	int i;

	if (a < 0)
	a = -a;
	i = a % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
