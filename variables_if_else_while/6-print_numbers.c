#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 using putchar
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
