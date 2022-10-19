#include "main.h"
/**
*times_table- print the multiple table till 9
*
*Return: product
*/
void times_table(void)
{
	int  i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			k = i * j;
			_putchar(k);
		}
	_putchar('\n');
	}
}
