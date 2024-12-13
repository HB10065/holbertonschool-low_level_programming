#include "main.h"

/**
 * precursion - noc
 * @a: lugar del string
 * @s: string
 */
void precursion(int *a, char *s)
{
	if (s[*a] != '\0')
	{
		_putchar(s[*a]);
		*a = *a + 1;
		precursion(a, 	s);
	}
	else
	{
		_putchar(10);
	}
}
/**
 * _puts_recursion - imitates put
 * @s: String to print
 */
void _puts_recursion(char *s)
{
	int a = 0;

	precursion(&a, s);
}
