#include "main.h"
/**
 * times_table - Prints multiplication tables from 0 to 9
 */
void times_table(void)
{
	int c, f, num, ldnum, fdnum;

	for (c = 0; c < 10; c++)
	{
		for (f = 0; f < 10; f++)
		{
			num = c * f;
			if (num < 10)
			{
				if (f != 0)
					_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				ldnum = num % 10;
				fdnum = (num / 10) % 10;
				_putchar(fdnum + '0');
				_putchar(ldnum + '0');
			}
			if (f != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(10);
		}
	}
}
