#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %i bytes(s)\n", sizeof(char));
	printf("Sizeof of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i bytes(s)\n",sizeof(long long int));
        printf("Size of a float: %i bytes(s)\n", sizeof(float));
	return (0);
}
