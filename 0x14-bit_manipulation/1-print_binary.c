#include "main.h"

/**
* print_binary - a function that prints the binary,
* representation of a number.
* @n: the number to print in binary
*/
void print_binary(unsigned long int n)
{
int j = 63;
int num = 0;
unsigned long int current;

while (j >= 0)
{
current = n >> j;

if (current & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');

j--;
}

if (!num)
_putchar('0');
}
