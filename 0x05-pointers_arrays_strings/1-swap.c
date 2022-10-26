#include "main.h"
/**
*swap_int- swap two ints
*@a:first interger
*@b:second interger
*Return : no return
*/
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
