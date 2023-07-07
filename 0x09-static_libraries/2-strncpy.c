#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: input value
 * @src: input value
 * @i: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int i)

{
	int j;

	j = 0;
	while (j < i && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < i)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
