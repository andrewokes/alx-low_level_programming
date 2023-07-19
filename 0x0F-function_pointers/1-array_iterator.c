#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;

	if (array == NULL || action == NULL)
		return;

	while (j < size)
	{
		action(array[j]);
		j++;
	}
}
