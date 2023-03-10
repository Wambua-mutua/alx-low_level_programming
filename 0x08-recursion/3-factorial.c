#include "main.h"
/**
 *factorial - returns factorial of a number given
 *@n: input
 *Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
