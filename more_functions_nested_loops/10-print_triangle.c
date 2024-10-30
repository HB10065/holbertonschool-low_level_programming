#include "main.h"

/**
 * print_triangle - imprime un triangulo
 * @size: tama√o del triangulo
 */
void print_triangle(int size)
{
	int i = 1, j, l;

	while (i <= size)
	{
		j = size - i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		l = 1;
		while (l <= i)
		{
			_putchar('#');
			l++;
		}
		_putchar(10);/*new line*/
		i++;
	}
	if (size <= 0)
		_putchar(10);
}
