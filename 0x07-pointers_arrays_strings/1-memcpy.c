#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
*_memcpy - Copies n bytes from memory area src to memory area dest
*
*Description: This function copies n bytes from the memory area pointed to by
*
*src to the memory area pointed to by dest. The memory areas may overlap, and
*
*the copy is always done in a non-destructive manner. That is, if the memory
*
*areas overlap and the direction of the copy is from higher to lower
*
*addresses, the original values in the overlapping region will be copied to
*
*the destination before they are overwritten.
*
*@dest: A pointer to the destination memory area
*
*@src: A pointer to the source memory area
*
*@n: The number of bytes to copy
*
*Return: A pointer to the destination memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;

while (n--)
{
*dest++ = *src++;
}

return (ptr);
}


