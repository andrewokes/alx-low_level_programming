#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * @c: The character to print
 * include the declaration _putchar
 * Return: Void
 */

int _putchar(char c);

void _puts(char *str)
{
	for (; *str != '\0'; str++)

	{
		_putchar(*str);
	}
		_putchar('\n');
}

