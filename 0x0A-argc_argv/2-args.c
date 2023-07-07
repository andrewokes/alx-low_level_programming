#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}

	return (0);
}
