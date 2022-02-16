#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int g)
{
	if (g >= 98)
	{
		while (g > 98)
			printf("%d, ", g--);
		printf("%d\n", g);
	}

	else
	{
		while (g < 98)
			printf("%d, ", g++);
		printf("%d\n", g);
	}
}
