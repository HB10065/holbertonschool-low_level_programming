#include <stdio.h>
/**
 * main - prints base 16 numbers putchar
 * Return: 0
 */
int main(void)
{
	int hexnum = '0', hexlet = 'A';

	while (hexnum <= '9' || hexlet <= 'F')
	{
		if (hexnum <= '9')
		{
			putchar(hexnum);
			hexnum++;
		}
		else
		{
			putchar(hexlet);
			hexlet++;
		}
	}
	putchar(10);
	return (0);
}
