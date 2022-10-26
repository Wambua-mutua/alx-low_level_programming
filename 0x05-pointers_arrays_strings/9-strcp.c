#include "main.h"
/**
*_strcpy- copy string pointed by scr
*@dest: destination
*@src:source
*Return:pointer dest
*/
char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while  (num >= 0)
	{
		*(dest + num) = *(src + num);
		if (*(src + num) == '\0')
			break;
		num++;
	}
	return (dest);
}
