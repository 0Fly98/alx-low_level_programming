/**
 * _strcat - Concatenates two strings.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The string to be concatenated to the end of dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	/* Find the length of dest */
	while (*(dest + dest_len) != '\0')
		dest_len++;

	/* Append src to dest */
	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + dest_len + i) = *(src + i);

	/* Add the terminating null byte */
	*(dest + dest_len + i) = '\0';

	return dest;
}

