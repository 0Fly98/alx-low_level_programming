#include "main.h"
#include <stdio.h>

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 *find_sqrt - Finds the natural square root of a number.
 @num: The number to find the square root of.
 @root: The root to be tested.
 *
 *Return: If the number has a natural square root - the square root.
 *	  If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	/* Function body */
	if (root * root == num)
		return (root);

	if (root * root > num)
		return (-1);

	return (find_sqrt(num, root + 1));
}
