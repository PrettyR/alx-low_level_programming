/**
 * _strstr - finds the first occurrence of a substring in a string
 *
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p = haystack;
		char *q = needle;

		while (*q != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
