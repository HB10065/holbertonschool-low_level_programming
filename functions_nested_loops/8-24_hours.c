#include "main.h"
/**
 *
 */
void jack_bauer(void)
{
	int H1 = 0, H2 = 0, M1 = 0 M2 = 0;

	_putchar(H1 + '0');
	_putchar(H2 + '0');
	_putchar(':');
	_putchar(M1 + '0');
	_putchar(M2 + '0');
	_putchar(10);/* salto de linea */
	M2++;
	while (H1 < 3)
	{
		_putchar(H1 + '0');
        	_ptchar(H2 + '0');
        	_putchar(':');
        	_putchar(M1 + '0');
        	_putchar(M2 + '0');
        	_putchar(10);/* salto de linea */
		M2++;
		if (M2 > 9)
		{
			M2 = 0;
			M1++;
		}
		if (M1 > 5)
		{
			M1 = 0;
			H2++;
		}
		if (H2 > 9)
		{
			H2 = 0;
			H1++;
		}
		if (H1 == 2 && H2 == 4)
			H1++;
	}
}
