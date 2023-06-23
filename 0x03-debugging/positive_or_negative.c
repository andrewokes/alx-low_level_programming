#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Funtion for positive and negative
 * @i: input
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
