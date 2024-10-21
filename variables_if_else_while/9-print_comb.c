#include <stdio.h>
/**
 * main - imprime del 0 al 9 con "," de por medio
 * Return: 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num < '9')
		{
			putchar(num);
			putchar(',');
			num++;
		}
		else
		{
			putchar(num);
			num++;
		}
	}
	putchar(10);/*Salto de linea*/
	return (0);
}
