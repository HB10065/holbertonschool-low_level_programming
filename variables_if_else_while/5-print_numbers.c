#include <stdio.h>
/**
 * main - prints numbers from 0 to 9
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		if (num == 9)
			putchar(10);
		num++;
	}
	return (0);
}
