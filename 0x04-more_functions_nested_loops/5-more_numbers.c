#include <stdio.h>
#include <unistd.h>

/**
 * more_numbers - prints the numbers 0 to 14, 10 times followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10) /* for double digit numbers, print both digits */
			{
				putchar(i / 10 + '0');
			}

			putchar(i % 10 + '0');
		}

		putchar('\n');
	}
}

