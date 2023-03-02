#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (i != '\0')
	{
	if (i >= 'a' && i <= 'z')
		i = i - 32;
		i++;
	}
	return (n);
}
