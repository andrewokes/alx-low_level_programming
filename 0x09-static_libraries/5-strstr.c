/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: Always return 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *h = haystack;
	char *n = needle;

	while (*n == *h && *n != '\0')
	{
	n++;
	h++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}
	return (0);
}
