#include <stdio.h>
#include  "main.h"
/**
*main - Prints numbers between 00 to 89
*Return: Always 0 (Success)
*/
int main(void)
{
	int i, x;

	i = 48;
	x = 48;
	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (x != i && x < i)
			{
				_putchar(e);
				_putchar(i);
				if (i == 57 && x == 56)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		x++;
	}
	_putchar('\n');
	return (0);
}
