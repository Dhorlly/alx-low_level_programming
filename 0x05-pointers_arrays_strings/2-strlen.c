#include "main.h"
#include <stdio.h>

/**
 * _strlen - the function returns the length of a string
 * @s: pointer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
 
