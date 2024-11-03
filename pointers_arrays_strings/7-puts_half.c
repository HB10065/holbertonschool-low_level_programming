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
	j = i / 2;
	if (j % 2 != 0)
		j--;
	while (j <= i && str[j] != 0)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar(10);/*new line*/
}
