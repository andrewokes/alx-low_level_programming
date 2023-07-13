#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @x: char to copy
 * @j: number of times to copy x
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char x, unsigned int j)
{
	unsigned int i = 0;

	while (i < j)
	{
		s[i] = x;
		i++;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	while (i < nmemb)
	{
		_memset(ptr + (i * size), 0, size);
		i++;
	}

	return (ptr);
}
