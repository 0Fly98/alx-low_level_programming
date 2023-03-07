#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: A pointer to a pointer to a char.
 * @to: A pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
