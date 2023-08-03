#include "main.h"

/**
* get_bit - a function that returns the value,
* of a bit at a given index.
* @n: The number to search
* @index: The index of the bit
*
* Return: value of the bit(sucess)
*/
int get_bit(unsigned long int n, unsigned int index)
{
int result;

if (index > 63)
return (-1);

result = (n >> index) & 1;

return (result);
}
