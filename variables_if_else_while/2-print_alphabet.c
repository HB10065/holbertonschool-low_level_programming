#include <stdio.h>
/**
 * main - Prints with putchar
 * Return: 0
 */
int main(void)
{
	int ascii;

	for (ascii = 97; ascii < 123; ascii++)
	{
		putchar(ascii);
		if (ascii == 122)
			putchar(10);
	}
	return (0);
}
