#include "main.h"

/**
 * print_line - imprime "_" n veces
 * @n: numero dado
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
	}
	_putchar(10); /*new line*/
}
