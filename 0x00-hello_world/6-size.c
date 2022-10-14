#include <stdio.h>

/* main - Entry point*/

int main(void)

{
/*description: return 0 if succesful*/

	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	return (0);
}
