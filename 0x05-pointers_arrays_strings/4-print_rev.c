#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: string to reverse
 *Return: Nothing
 */
void print_rev(char *s)
{
	int l, len, temp;

	len = strlen(s);
	for (l = 0; l < len/2; l++)
	{
		temp = str[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}
