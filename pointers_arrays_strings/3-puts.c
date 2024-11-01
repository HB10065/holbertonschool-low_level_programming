#include "main.h"

/**
 * _puts - imprime un String dado
 * @str: String dado
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
	}
	_putchar(10);/*nevua linea*/
}
