#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the memory area to be filled.
 * @b: the constant byte to fill the memory area with.
 * @n: the number of bytes to fill with the constant byte
 * Return: a pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
