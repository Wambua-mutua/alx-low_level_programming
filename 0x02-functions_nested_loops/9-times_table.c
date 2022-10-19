#include "main.h"
/**
*times_table- print the multiple table till 9
*
*Return: product
*/
void times_table(void)
{
	int  i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			k = i * j;
			_putchar(k);
		}
	_putchar('\n');
	}
}
