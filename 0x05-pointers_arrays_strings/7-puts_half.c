#include "main.h"
/**
*puts_half - prints half of a string
*@str:string input
*Return:no return
*/
void puts_half(char *str)
{
	int length_of_the_string, n;

	length_of_the_string = 0;
	while (length_of_the_string >= 0)
	{
		if (str[length_of_the_string] == '\0')
			break;
		length_of_the_string++
	}
	if (length_of_the_string % 2 == 1)
		n = length_of_the_string / 2;
	else
		n = (lenght_of_the_string - 1) / 2;
	for (n++; n < length_of_the_string; n++)
		_putchar(str[n]);
	_putchar('\n');
}
