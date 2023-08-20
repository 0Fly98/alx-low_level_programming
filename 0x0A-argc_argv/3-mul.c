#include <stdio.h>
#include "myheader.h"

/**
 * my_atoi - convert string to interger
 * @str: string to be converted
 *
 * Return: the integer converted from the string
 */
int my_atoi(char *str)
{
	int i, digit, num, len, minus, flag;
	i = 0;
	digit = 0;
	num = 0;
	len = 0;
	minus = 0;
	flag = 0;

	while (str[len] != '\0')
		len++;
	if (str[i] == '-')
		minus++;

	if (str[i] >= '0' && str [i] <= '9')
	{
		digit = str[i] - '0';
		if (minus % 2)
			digit = -digit;
		flag = 0;
	}
	if (flag == 0)
		return (0);

	return (num);
}
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Results: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int results, number1, number2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = my_atoi(argv[1]);
	number2 = my_atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}
