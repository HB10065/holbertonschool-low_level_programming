#include "main.h"

/**
 * print_square - imprime un cuadrado
 * @size: tama√o del cuadrado
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
		}
		_putchar(10); /*new line in ascii*/
	}
	if (size <= 0)
		_putchar(10);
}
