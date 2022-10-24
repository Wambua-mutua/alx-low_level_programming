#include "main.h"
/**
*print_number - prints an integer
*@n: input integer.
*Return: no return
*/
void print_number(int n)
{
	unsigned int pm, qd, count;

	if (n < 0)
	{
		_putchar(45);
		pm = n * -1;
	}
	else
	{
		pm = n;
	}
	qd = pm;
	count = 1;
	while (qd > 9)
	{
		qd /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((pm / count) % 10) + 48);
	}
}
