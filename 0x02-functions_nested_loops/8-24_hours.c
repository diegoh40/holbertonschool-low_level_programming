#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * star from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int o, p;

	o = 0;

	while (o < 24)
	{
		p = 0;
		while (p < 60)
		{
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
			_putchar(':');
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar('\n');
			p++;
		}
		o++;
	}
}
