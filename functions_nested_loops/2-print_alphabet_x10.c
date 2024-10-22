#inlcude "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0, alph;

	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar(10);/*new line*/
		i++;
	}	
}
