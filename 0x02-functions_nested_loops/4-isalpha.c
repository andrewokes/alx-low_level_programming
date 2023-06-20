#include "main.h"
/**
 * _isalpha - Show 1 if the input is a upper
 * or lowercase otherwise show 0
 *
 * @c: The character found in ASCII code
 *
 * Return: 1 for letters then 0 for non letters.
 */

_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
