#include <stdio.h>
/**
 * main - prints the alphabet backwards with putchar
 * Return: 0
 */
int main(void)
{
	int ascii;

	for (ascii = 'z'; ascii >= 'a'; ascii--)
		putchar(ascii);
	putchar(10);
	return (0);
}
