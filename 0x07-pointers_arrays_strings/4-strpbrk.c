/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of characters to search for
 *
 * Return: Always return 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a, j;

	for (a = 0; s[a] != '\0'; a++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[a] == accept[j])
		{
			return (s + a);
		}
	}
	}

	return (0);
}
