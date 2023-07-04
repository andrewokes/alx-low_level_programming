#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer memory destination
 * @n: the bytes
 * @b: the byte constant
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}