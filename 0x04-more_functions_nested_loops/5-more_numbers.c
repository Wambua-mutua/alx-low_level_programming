#include "main.h"
/**
*more_numbers - print int btwn 0-14 10 times
*Return: no return.
*/
void more_numbers(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
