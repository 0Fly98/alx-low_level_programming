#include "main.h"
#include <stdio.h>

/**
 * main - programe prints all arguments it receives.
 * @argc: counts arguments
 * @argv: prints all arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*While - prints each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
