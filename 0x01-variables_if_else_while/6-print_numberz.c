#include <stdio.h>
/**
 *main - print nmbers using putchar
 *
 *Return: Always o (success)
 */

int main(void)
{
	/*use ASCII for 0-10*/
	for (int i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
