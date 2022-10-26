#include "main.h"
/**
*print_array- prints the elemts in an array
*@a: array
*@n: n elements
*
*/
void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		printf("%d", *(a + k));
		if (k != (n - 1))
			printf(", ");
	}
	printf("\n");
}
