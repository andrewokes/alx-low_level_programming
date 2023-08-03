#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int.
* @b: the  string containing the binary number
*
* Return: the to be converted
*/
unsigned int binary_to_uint(const char *b)
{
int j = 0;
unsigned int dec_val = 0;

if (!b)
return (0);

while (b[j])
{
if (b[j] < '0' || b[j] > '1')
return (0);
dec_val = 2 * dec_val + (b[j] - '0');
j++;
}

return (dec_val);
}
