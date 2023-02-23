/**
 * print_sign - function that prints signs
 *
 * @n: the number of the sign should be printed
 *
 * Return: 1 if the number is greater than zero
 * 0 if the number is zero
 * -1 if the number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}

	else
	{
		putchar('-');
		return (-1);
	}
}
