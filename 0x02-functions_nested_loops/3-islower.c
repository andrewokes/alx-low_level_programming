#include "main.h"

/**
 * _islower - Show 1 if input is a
 * lowercase character. If not show
 * otherwise 
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for lowercase 0 for not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
