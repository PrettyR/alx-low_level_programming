/**
 * _strchr - A function that locates a character in a string
 * @s: a pinter to the string in which to search for the pointer
 * @c: the character to search for
 * Return: first occurence of charatcer or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
