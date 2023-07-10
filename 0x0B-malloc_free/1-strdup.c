#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  a function that returns a pointer
 * to a newly allocated space in memory
 * @str: input string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *aaa;
	char *x;
	int j, u = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	aaa = malloc(sizeof(char) * (j + 1));

	if (aaa == NULL)
		return (NULL);

	for (u = 0; str[u]; u++)
		aaa[u] = str[u];

	aaa[u] = '\0'; /* Add the null terminator to the end of duplicated string */

	x = aaa; /* Assign the pointer to x */

	return (x);
}
