#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer value
 */
int atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (s[i])
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            result = (result * 10) + (s[i] - '0');
        }
        else if (result > 0)
        {
            /* We've reached the end of the number */
            break;
        }
        i++;
    }

    return result * sign;
}

