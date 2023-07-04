#include "main.h"
/**
 * _strchr - Locates the character on a string
 * @s: string to check
 * @c: character to locate
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
