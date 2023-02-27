#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        /* Print the current element */
        printf("%d", a[i]);

        /* If this is not the last element, print a comma and space */
        if (i != n - 1)
            printf(", ");
    }

    /* Print a newline character */
    printf("\n");
}

