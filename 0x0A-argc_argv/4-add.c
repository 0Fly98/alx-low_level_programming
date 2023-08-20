#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *arg;

	while (--argc > 0)
	{
		arg = argv[argc];
		while (*arg)
		{
			if
				(!isdigit(*arg))
				{

					printf("Error\n");
					return (1);
				}
			arg++;
		}
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);

	return (0);
}
