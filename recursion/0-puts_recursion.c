#include "main.h"

/*
 * _puts_recursion - imitates put
 * @s: String to print
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar(10); /* new line */
}
