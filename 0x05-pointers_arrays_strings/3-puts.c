#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * include the declaration _putchar
 * Return: Void
 */

void _puts(char *str)
{
	int _putchar(char c);

	for (;*str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}

