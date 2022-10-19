#include "main.h"
/**
*_abs -compute absolute value
*
*@i:integer input
*
*Return: absolute value
*/
int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	else
	{
		return (i);
	}
}
