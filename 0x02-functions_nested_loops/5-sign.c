#include "main.h"
/**
*print_sign- print the sign of the number
*
*@n:integer input
*
*Return: 1 for positive o for zero -1for negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
