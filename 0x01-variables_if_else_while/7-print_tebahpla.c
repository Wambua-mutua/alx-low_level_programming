#include <stdio.h>
/**
 * main- print alphabet in reverse
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	for (int i = 'z'; i <= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
