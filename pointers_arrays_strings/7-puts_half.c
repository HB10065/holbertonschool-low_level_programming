#include "main.h"

/**
 * puts_half - algo
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != 0)
		i++;
	if (i % 2 != 0)
		j = (i - 1) / 2;
	else
		j = i / 2;
	while (j <= i && str[j] != 0)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar(10);/*new line*/
}
