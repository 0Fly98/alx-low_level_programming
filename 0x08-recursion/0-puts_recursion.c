#include "main.h"

/**
 * _puts - function like puts();
 * @s: input
 * Return: always 0 (Success)
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
