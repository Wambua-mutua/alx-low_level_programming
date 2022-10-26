#include "main.h"
/**
*_puts-prints a string
*@str:character input
*Return:string output
*/
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
		putchar('\n');
		break;
	}
	putchar(str[count]);
	count++;
}
