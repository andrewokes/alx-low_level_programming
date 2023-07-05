int actual_prime(int n, int i);
/**
 * is_prime_number - a function that returns input integer is a prime number
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, n - 1));
	}
}

/**
 * actual_prime - Recursively check if a number is prime.
 * @n: The number to check.
 * @i: The present enumerator
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
