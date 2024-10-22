#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 * Return: 0
 */
int print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
	return (0);
}
