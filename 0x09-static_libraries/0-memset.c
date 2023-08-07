#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _MEMSET - FILLS memory with a constant byte.
 *
 * @s: Pointer to the memory area to  be filled.
 * @b: the character to fill the emory with
 * @n: the number of bytes to fill.
 *
 * Return: A pointer rto the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
