#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints a number of arguments passed on it.
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);

return (0);
}
