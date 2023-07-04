#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sums of the diagonals of a square matrix
 * @a: Pointer to the matrix
 * @size: Size of the matrix
 *
 * Return: Always return 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int j;

	for (j = 0; j < size * size; j += size + 1)
	{
		sum1 += a[j];
		sum2 += a[(j / size) * size + (size - 1 - (j % size))];
	}

	printf("%d, %d\n", sum1, sum2);
}
