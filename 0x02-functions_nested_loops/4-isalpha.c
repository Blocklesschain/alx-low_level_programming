#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is an alphabet
 * and 0 otherwise
 *
 */

int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
