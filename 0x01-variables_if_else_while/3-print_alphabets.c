#include <stdio.h>
/**
 * main - Print the alphabet in lowecase and in uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
