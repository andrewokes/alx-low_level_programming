#include "main.h"

/**
* flip_bits - a function that returns the number of bits you would
* need to flip to get from one number to another.
* @n: number that is first
* @m: number that is scecond
*
* Return: The number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j = 63;
unsigned int num = 0;
unsigned long int current_node;
unsigned long int exclusive_node = n ^ m;

while (j >= 0)
{
current_node = exclusive_node >> j;
if (current_node & 1)
num++;
j--;
}

return (num);
}
