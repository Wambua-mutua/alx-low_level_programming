#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main- dtermine if the last digit of a num <5>
 *
 *Return: Always 0(success)
 */

int main(void)

{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*divide n by 10 and get modulous i.e last digit*/
	 m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}

	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
