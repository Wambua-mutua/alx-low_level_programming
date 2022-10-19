#include <stdio.h>
#include<stdlib.h>
/**
 * main- type the alphabets in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
