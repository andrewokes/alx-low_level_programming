#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convert a string to integar
 * @s: string to be converted
 *
 * Return: the int (j)  converted from the string
 */

int _atoi(char *s)
{
	int x, y, j, len, e, digit;

	x = 0;
	y = 0;
	j = 0;
	len = 0;
	e = 0;
	digit = 0;

		while (s[len] != '\0')
		len++;

	while (x < len && e == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			j = j * 10 + digit;
			e = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			e = 0;
		}
		x++;
	}

	if (e == 0)
		return (0);

	return (j);
}

/**
 * main -  multiplication two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
