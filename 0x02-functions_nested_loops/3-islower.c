include "main.h"
/**
*_islower- checks if c is lowercase
*
*@c: Ascii character
*
*Return:always  1(lowercase) 0 (otherwise)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n);
}
