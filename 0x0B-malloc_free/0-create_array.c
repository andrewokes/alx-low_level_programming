#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
