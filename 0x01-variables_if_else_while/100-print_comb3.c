#include <stdio.h>
/**
 * main - Program that prints combination of three digits
 *
 * Desciption: Program that prints all possible outcomes
 * of double digit numbers from the ANSI character set
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_one = '0';
	int digit_two, digit_three;


	while (digit_one <='9')/* Parent loop for the first digit */
	{
		digit_two = '0';
		while (digit_two <= '9')/* Child loop for second digit */
		{
			digit_three = '0';
			while (digit_three <= '9')/* Child loop for second digit */
			{
				/*Prevent repeating combinations and same digits */
				if (digit_one > digit_two || digit_two > digit_three ||
				digit_one == digit_two || digit_two == digit_three)
				{
					digit_three++;
					continue;
				}
				putchar(digit_one);
				putchar(digit_two);
				putchar(digit_three);

				/* Prevents output if at the end of combination i.e 89 */
				if (digit_one != '7' || digit_two != '8' || digit_three != '9')
				{
					putchar(',');
					putchar(' ');
				}
				digit_three++;
			}
			digit_two++;
		}
		digit_one++;
	}
	putchar('\n');
	return (0);
}
