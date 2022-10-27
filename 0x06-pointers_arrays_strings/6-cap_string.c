#include "main.h"
/**
*cap_string - capitalizes all words of a string
*@s: input string
*Return: the pointer to dest
 */
char *cap_string(char *s)
{
	int num = 0, i;
	int sep_words[] = {10, 9, 32, 125, 40, 46, 33, 123, 34, 59, 41, 63, 44};

	if (*(s + num) >= 97 && *(s + num) <= 122)
		*(s + num) = *(s + num) - 32;
	num++;
	while (*(s + num) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + num) == sep_words[i])
			{
				if ((*(s + (num + 1)) >= 97) && (*(s + (num + 1)) <= 122))
					*(s + (num + 1)) = *(s + (num + 1)) - 32;
				break;
			}
		}
		num++;
	}
	return (s);
}
