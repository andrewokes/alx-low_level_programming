#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int x, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (a = 0; s2[a] != '\0'; a++)
		;

	conct = malloc(sizeof(char) * (x + a + 1));

	if (conct == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		conct[x] = s1[x];

	for (a = 0; s2[a] != '\0'; a++, x++)
		conct[x] = s2[a];

	conct[x] = '\0';

	return (conct);
}

