#include <stdio.h>

/**
*main -print all numbers of base 16
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = '0';n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'F'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
