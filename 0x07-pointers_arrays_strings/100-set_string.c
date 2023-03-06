#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: content is to be copied
 * @to: string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
