#include <stdio.h>
/**
 * main - prints the alphabet without e and q using putchar
 * Return: 0
 */
int main(void)
{
	int ascii;

	for (ascii = 97; ascii <= 123; ascii++)
	{
		if (ascii != 101 || ascii != 113)
			putchar(ascii);
		else if (ascii == 101 || ascii == 113)
		{
		}
		else
			putchar(10);
	}
	return (0);
}
