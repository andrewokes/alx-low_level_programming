#include "main.h"

/**
 * print_rev - prints a string in reverse order, followed by a new line
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')

	{
	c++;
	}
	
	for (int c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');

}
