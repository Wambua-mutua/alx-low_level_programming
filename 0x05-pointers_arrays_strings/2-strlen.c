#include "main.h"
/**
*_strlen- return length of a character
*@s:input string
*Return:lenght of string
*/
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
