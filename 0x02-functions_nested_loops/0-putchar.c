#include "main.h"
/**
*main - print _putchar
*
*Return:Always 0 (success)
*/
int main(void)
{
	int s[] = {'-', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int print;

	for  (print = 0; print < 8; print++)
	{
		_putchar(s[print]);
	}
	_putchar('\n');

	return (0);
}
