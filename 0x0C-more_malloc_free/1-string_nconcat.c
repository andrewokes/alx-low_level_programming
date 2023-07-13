#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string.
 * @s1: String to append to.
 * @s2: String to concatenate from.
 * @n: Number of bytes from s2 to concatenate to s1.
 *
 * Return: Pointer to the resulting string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int totalLength;
	unsigned int i, j;
	char *s;

	/* Calculate the lengths of s1 and s2 */
	for (len1 = 0; s1 && s1[len1]; len1++)
		;
	for (len2 = 0; s2 && s2[len2]; len2++)
		;

	/* Determine the total length of the resulting string */
	totalLength = len1 + (n < len2 ? n : len2);

	/* Allocate memory for the resulting string */
	s = malloc(sizeof(char) * (totalLength + 1));

	if (!s)
		return (NULL);

	/* Copy characters from s1 to s */
	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	/* Copy n bytes from s2 to s */
	for (j = 0; j < n && s2[j] != '\0'; j++)
		s[i++] = s2[j];

	/* Null-terminate the resulting string */
	s[i] = '\0';

	return (s);
}
