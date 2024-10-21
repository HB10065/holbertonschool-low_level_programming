#include <stdio.h>
/**
 * main - prints alphabet in lower and upper case with putchar
 * Return: 0
 */
int main(void)
{
	int asciim, asciiM;

	for (asciim = 97, asciiM = 65; asciim < 123 || asciiM < 92; asciim++)
	{
		if (asciim < 123)
			putchar(asciim);
		else if (asciiM < 91)
		{
			putchar(asciiM);
			asciiM++;
		}
		else
		{
			putchar(10);
			asciiM++;
		}
	}
	return (0);
}
