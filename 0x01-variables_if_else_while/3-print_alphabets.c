#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * Return:0
 */
int main(void)
{
	char alf;

	for (alf = 'a'; alf <= 'z'; alf++)
	  putchar(alf);

	for (alf = 'A'; alf <= 'Z'; alf++)
	  putchar(alf);

	
	putchar('\n');
	return (0);
}
