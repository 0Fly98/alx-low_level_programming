#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Excutes a function on each element of an array
 *
 * @array: The array to iterate over
 *@size: The size of the array
 *@action: A pointer to the function to excute on each element
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
