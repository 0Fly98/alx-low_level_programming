#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse using recursion.
 * @s: Pointer to the string to be printed in reverse.
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return;

	/* recursive case */
	_print_rev_recursion(s + 1);
	putchar(*s);
}
