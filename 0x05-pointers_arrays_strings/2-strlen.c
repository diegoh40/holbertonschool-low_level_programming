#include <stdio.h>
#include "main.h"

/**
 * _strlen- swaps the values of two integers
 *@s: the string to be measured
 * Return: 0
 */
int _strlen(char *s)
{
int length = 0;

while (*s++)
length++;

return (length);
}
