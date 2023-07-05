/**
 * _pow_recursion - function that return the value of x raise to the power of y
 * @x: The base value.
 * @y: The exponent.
 * Return: The result of x raised to the power of y, or -1 if y is negative.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

