#include "main.h"
/**
*main -print alphabet in lowercase
*
*Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
