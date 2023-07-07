#include "main.h"
/**
 *_memcpy - Copies memory are
 *@dest: memory stored destination
 *@src: where memory is copied
 *@n: number of byte
 *
 *Return: Always success (0)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
