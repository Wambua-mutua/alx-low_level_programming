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
	for (int n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}