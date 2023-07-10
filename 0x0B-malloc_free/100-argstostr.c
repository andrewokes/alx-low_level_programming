#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command-line arguments into a single string
 * @ac: number of command-line arguments
 * @av: array of command-line argument strings
 * Return: pointer to the concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int x, y, u = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			u++;
	}
	u += ac;

	str = malloc(sizeof(char) * (u + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[j] = av[x][y];
			j++;
		}

		str[j] = '\n';
		j++;
	}

	return (str);
}
