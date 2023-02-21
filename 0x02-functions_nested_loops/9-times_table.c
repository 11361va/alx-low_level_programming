#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	u = z % 10;
	d = (z - u) / 10;
	_putcher(44);
	_putcher(32);
	_putcher(d + '0');
	_putcher(u + '0');
	}
	else
	{
	if (y != 0)
	{
	_putcher(44);
	_putcher(32);
	_putcher(32);
	}
	_putchar(z + '0');
	}
	}
	_putcher('\n')
	}
}
