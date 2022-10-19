#include "main.h"
/**
*print_to_98- prints natural numbers n- 98
*
*@n: interger input
*
*Return:no value
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
	}
	_putchar('\n');
}
