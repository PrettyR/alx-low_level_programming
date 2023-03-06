/**
 * _memcpy - A function thatcopies memory area
 * @dest: a pointer to the memory area where the data should be copied to
 * @src: a pointer to the memory where the data should be copied from
 * @n: the number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
