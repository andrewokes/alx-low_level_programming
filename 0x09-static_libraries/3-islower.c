#include "main.h"

/**
 * _islower - Show 1 if the input is a
 * lowercase character, another case show 0
 *
 * @c: The character is from ASCII code
 *
 * Return: 1 for the lowercase character 0 for not.
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
