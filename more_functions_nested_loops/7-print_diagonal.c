#include "main.h"

/**
 * print_diagonal - adadad
 * @n: se
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (n != 0)
		{
			for (j = 0; j <= n; j++)
				_putchar(' ');
			_putchar(92); /*inverse diagonal slash*/
		}
		_putchar(10); /*new line*/
	}
	if (n < 0)
		_putchar(10);
}
