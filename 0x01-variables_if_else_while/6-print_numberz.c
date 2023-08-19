#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0(Sucess)
 */
int main(void)
{
	char c;
		for (c = '0'; c <= '9'; c++)
		{
			putchar(c);
		}
	putchar('\n');
	return (0);
}
