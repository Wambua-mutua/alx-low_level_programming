#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main- gett alphabtes upper and lower
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n, x;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
