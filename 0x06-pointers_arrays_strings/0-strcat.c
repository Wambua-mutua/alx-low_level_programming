#include "main.h"
/**
* _strcat - concatenates two strings
*@dest: destination
*@src: source
*Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int num = 0, num1 = 0;

	while (*(dest + num) != '\0')
	{
		count++;
	}
	while (num1 >= 0)
	{
		*(dest + num) = *(src + num1);
		if (*(src + num1) == '\0')
			break;
		num++;
		num1++;
	}
	return (dest);
}

													}
