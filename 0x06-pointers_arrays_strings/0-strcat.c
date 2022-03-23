#include "main.h"

/**
 * strcat - Concatenate two strings and terminates with a null byte
 * @dest: Pointer to the first string
 * @src: Pointer to the second string\
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len =0;

	while(dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
