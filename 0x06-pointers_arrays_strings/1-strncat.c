/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
    int i = 0, j = 0;

    /* Find the end of the destination string */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Append the source string to the destination string */
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Add a null character to the end of the resulting string */
    dest[i] = '\0';

    /* Return the resulting string */
    return dest;
}

