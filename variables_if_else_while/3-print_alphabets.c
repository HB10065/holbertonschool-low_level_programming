#include <stdio.h>
/**
 * main - prints alphabet in lower and upper case with putchar
 * Return: 0
 */
int main(void)
{
	int asciim, asciiM;

	for (asciim = 97, asciiM = 65; asciim < 123 || asciiM < 91; asciim++)
	{
		putchar(asciim);
		if (asciim >= 91)
		{
			putchar(asciiM);
			asciiM = asciiM + 1;
			if (asciiM == 90)
				putchar(10);
		}
	}
	return (0);
}
