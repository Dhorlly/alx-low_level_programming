#include "main.h"
/**
* _puts_recursion - Function to prints a string, followed by a new line
* Desc: _memset
* @s: char type
* Return: char type
**/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
_putchar(*s);
s++;
_puts_recursion(s);
}
