#include "main.h"
/**
*print_last_digit- print last digit of int
*
*@i:integer input
*
*Return:last digit
*/
int print_last_digit(int i)
{
	int x;

	x = i % 10;

	if (x < 0)
	{
		_putchar(-x + '0');
		return (-x);
	}
	else
	{
		putchar(x + '0');
		return (x);
	}
}
