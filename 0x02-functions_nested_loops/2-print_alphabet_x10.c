#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet.
 * in lower case
 */

void print_alphabet_x10(void)
{
	char ch;
	int x;

	x = 0;

	while (x < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		x++;
	}
}
