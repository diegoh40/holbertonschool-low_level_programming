#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return:0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	
	putchar('\n');
	
	return (0);
}
