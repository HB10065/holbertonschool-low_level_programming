#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar(10);
}
