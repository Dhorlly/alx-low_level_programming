#include "main.h"
/**
* factorial - Function to return the factorial of a given numer
* @n: int type
* Return: char type
**/
int factorial(int n)
{
if (n >= 1)
{
return (n * factorial(n - 1));
}
else if (n < 0)
return (-1);

else
return (1);
}
