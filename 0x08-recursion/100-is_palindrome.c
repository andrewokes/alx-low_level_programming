int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: The string to evaluate.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		int len = _strlen_recursion(s);

		return (check_pal(s, 0, len));
	}
}

/**
 * _strlen_recursion - Returns string length.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check_pal - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @i: The current iterator.
 * @len: The length of the string.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (i >= len)
	{
		return (1);
	}
	else if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	else
	{
		return (check_pal(s, i + 1, len - 1));
	}
}

