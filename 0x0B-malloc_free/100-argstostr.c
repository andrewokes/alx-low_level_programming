#include "main.h"
#include <stdlib.h>

/**
 * calculate_total_length - calculate the total length of concatenated string
 * @ac: number of command-line arguments
 * @av: array of command-line argument strings
 * Return: total length of the concatenated string
 */
int calculate_total_length(int ac, char **av)
{
	int x = 0, y = 0, total_len = 0;

	while (x < ac)
	{
		while (av[x][y])
		{
			total_len++;
			y++;
		}
		x++;
	}

	total_len += ac;

	return (total_len);
}

/**
 * concatenate_arguments - concatenate command arguments into a single string
 * @ac: number of command-line arguments
 * @av: array of command-line argument strings
 * @str: pointer to the concatenated string
 */
void concatenate_arguments(int ac, char **av, char *str)
{
	int x = 0, y = 0, j = 0;

	while (x < ac)
	{
		y = 0;

		while (av[x][y])
		{
			str[j] = av[x][y];
			j++;
			y++;
		}

		str[j] = '\n';
		j++;
		x++;
	}

	str[j] = '\0';
}

/**
 * argstostr - concatenate command-line arguments into a single string
 * @ac: number of command-line arguments
 * @av: array of command-line argument strings
 * Return: pointer to the concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = calculate_total_length(ac, av);

	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	concatenate_arguments(ac, av, str);

	return (str);
}
