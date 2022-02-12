#include <stdio.h>

/**
 * main - program that prints all possible combinations
 * Return:0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + "0");
		if (n == 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
