#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer memory destination
 * @n: the bytes
 * @b: the byte constant
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	
	s[1] = b;
	
	return (s);
}
