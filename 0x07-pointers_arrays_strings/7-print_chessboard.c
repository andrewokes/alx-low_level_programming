#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Print the chessboard
 * @a: 2D array of characters representing the chessboard
 * Return: Always return 0
 */
void print_chessboard(char (*a)[8])
{
	int u;
	int t;

	for (u = 0; u < 8; u++)
	{
		for (t = 0; t < 8; t++)
			putchar(a[u][t]);
		putchar('\n');
	}
}
