#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, j, k;

	for (a = 0; a < 10; a++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * a;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
