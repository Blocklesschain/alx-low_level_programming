#include <stdio.h>

/**
 * main - This prints the sizes of various computer
 * Return: 0 when successful
 */

int main(void)
{

	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i bytes(s)", sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", sizeof(float));
	return (0);
}
