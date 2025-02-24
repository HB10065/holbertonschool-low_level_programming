int _putchar(char c);
/**
 * precursion - noc
 * @a: lugar del string
 * @s: string
 */
void precursion(int *a, char *s)
{
	if (s[*a + 1] != '\0')
	{
		*a = *a + 1;
		precursion(a, s);
		_putchar(s[*a]);
	}
	else
	{
		_putchar(10);
	}
}
/**
 * _print_rev_recursion - prints a string backwards
 * @s: String to print
 */
void _print_rev_recursion(char *s)
{
	int a = 0;

	precursion(&a, s);
}
