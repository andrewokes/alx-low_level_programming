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
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
