#include "main.h"
/**
 * print_sign - checks if a number is positive, negative or zero
 * @n: number to check
 * Return: 1 if n is positive, 0 if it's zero and -1 if it is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
